import std/heapqueue

type cintArray = ptr UncheckedArray[cint]

proc malloc(size: csize_t): pointer {.importc.}

proc kSmallestPairs(a: cintArray, m: int, b: cintArray, n: int, k0: int, returnSize: ptr cint, returnColumnSizes: ptr cintArray): ptr UncheckedArray[cintArray] {.exportc.} =
  let
    k = min(k0, m*n)
    sizes = cast[cintArray](malloc(cast[csize_t](cint.s