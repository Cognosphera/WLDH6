
// Minimum Weighted Subgraph With the Required Paths
const int N = 100000;
int heap[N], lkp[N];
long dist[N];

void heap_up(int n, int x) {
  int key = heap[x];
  for (; x && dist[key] < dist[heap[(x-1)/2]]; x = (x-1)/2)
    lkp[heap[x] = heap[(x-1)/2]] = x;
  lkp[heap[x] = key] = x;
}

void heap_down(int n, int x) {
  int key = heap[x];
  for (int y; y = 2*x+1, y < n; x = y) {
    if (y+1 < n && dist[heap[y+1]] < dist[heap[y]]) y++;
    if (!(dist[heap[y]] < dist[key])) break;
    lkp[heap[x] = heap[y]] = x;
  }
  lkp[heap[x] = key] = x;
}