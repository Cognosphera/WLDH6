# Second Minimum Time to Reach Destination
import std/sequtils

type cintArray = ptr UncheckedArray[cint]

proc secondMinimum(n: int, edges: ptr UncheckedArray[cintArray], edgesSize: int, _: cintArray, time: int, change: int): int {.exportc.} =
  var
    adj = newSeq[seq[cint]](n)
    d = newSeqWith[int](n, n)
    q = @[n-1]
    qi = 0
  for i in 0..<edgesSize:
    let
      u = edges[i][0]-1
      v = edges[i][1]-1
    adj[u].add v
    adj[v].add u

  d[n-1] = 0
  while qi < q.len:
    let u = q[qi]
    inc qi
    for v in adj[u]:
      if d[v] == 