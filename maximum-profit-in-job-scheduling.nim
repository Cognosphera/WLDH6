import std/algorithm

type cintA = ptr UncheckedArray[cint]

proc jobScheduling(startTime: cintA, n: int, endTime: cintA, u0: cint, profit: cintA, u1: cint): cint {.exportc.} =
  var
    a = newSeq[(cint, cint, cint)](n)
    dp = newSeq[cint](n)
  for i in 0..<n:
    a[i] = (startTime[i], endTime[i], profit[i])
  a.s