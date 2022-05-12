# Partition Array Into Two Arrays to Minimize Sum Difference
import std/[algorithm, sequtils]

proc minimumDifference(nums: ptr UncheckedArray[cint], numsSize: int): int {.exportc.} =
  proc fn(a: openarray[cint]): seq[int] =
    var
      b = newSeq[int]()
      i, j: int
    result.add 0
    for x in a:
      b.setLen 0
      i = 0
      j = 0
      while i < result.len or j < result.len:
        if i <