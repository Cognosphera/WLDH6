type cintArray = ptr UncheckedArray[cint]

proc malloc(size: csize_t): pointer {.importc.}

proc findOrder(n: int, prereq: ptr UncheckedArray[cintArray], m: int, unused: pointer, returnSize: ptr cint): cintArray {.exportc.} =
  var
    d = newSeq[int](n)
    e = newSeq[seq[int]](n)
    fore = 0
    rear = 0
  result = cast[cintArray](malloc(cast[csize_t](cint.sizeof * n)))
  for x in toOpenArray(prer