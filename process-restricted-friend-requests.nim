# Process Restricted Friend Requests
import std/sequtils

type Arr[T] = ptr UncheckedArray[T]
proc malloc(size: csize_t): pointer {.importc.}

proc friendRequests(n: int, restrict: Arr[Arr[cint]], m: int, u0: pointer, reqs: Arr[Arr[cint]], q: int, u1: pointer, returnSize: ptr cint): Arr[int8] {.exportc.} =
  result = cast[Arr[int8]](malloc(q.csize_t))
  returnSize[] = q.ci