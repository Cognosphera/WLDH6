# Parallel Courses III
import sequtils

type cintArray = ptr UncheckedArray[cint]

proc minimumTime(n: int, rels: ptr UncheckedArray[cintArray], m: int, unused: pointer, time: cintArray, unused1: cint): int {.exportc.} =
  var
    d = newSeq[int](n)
    e = newSeq[seq[int]](n)
    fin = newSeq[int](n)
    top = -1
  for x in 