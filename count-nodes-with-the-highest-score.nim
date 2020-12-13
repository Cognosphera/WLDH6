# Count Nodes With the Highest Score
import std/sequtils

proc countHighestScoreNodes(parents: ptr UncheckedArray[cint], n: int): int {.exportc.} =
  var
    indegree = newSeq[int](n)
    size = newSeqWith[int](n, 1)
    product = newSeqWith[int](n, 1)
    top = -1
    be