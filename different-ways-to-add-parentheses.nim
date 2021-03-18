import sequtils, strutils

proc malloc(size: csize_t): pointer {.importc.}

proc diffWaysToCompute(s: cstring, returnSize: ptr cint): ptr UncheckedArray[cint] {.exportc.} =
  var
    i = 0
    nums = newSeq[int]()
  