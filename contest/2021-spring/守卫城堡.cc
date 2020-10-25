#define FOR(i, a, b) for (remove_cv<remove_reference<decltype(b)>::type>::type i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)

namespace {
const int N = 10000, V = 4*N+3;
struct Edge {int v, c, next; } e[N*12*2];
// src is sink-1
int head[V], allo, sink, h[V+2], nh[V+3];

void insert(int u, int v, int c) {
  e[allo] = Edge{v, c, head[u]}; head[u] = allo++;
  e[allo] = Edge{u, 0, head[v]}; head[v] = allo++;
}

int augment(int u, int d, int sink) {
  if (u == sink) return d;
  int old = d, minh = sink;
  for (int i = head[u]; ~i; i = e[i].next)
    if (e[i].c > 0) {
      int v = e[i].v;
      if (h[v]+1 == h[u]) {
        int dd = augment(v, min(d, e[i].c), sink);
        e[i].c -= dd;
        e[i^1].c += dd;
        if (!(d -= dd) || h[sink-