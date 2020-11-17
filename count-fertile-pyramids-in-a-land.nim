# Count Fertile Pyramids in a Land
import algorithm

type Arr[T] = ptr UncheckedArray[T]

proc countPyramids(a: Arr[Arr[cint]], m: int, ns: Arr[cint]): cint {.exportc.} =
  let n = ns[0].int
  var
    f = newSeq[cint](n+2)
    g = newSeq[cint](n+2)
  for _ in 0..1:
    f.fill 0
    for i in 0..<m:
      g.fill 0
      for j in 1..n:
        if a[i][j-1] == 1:
          g[j]