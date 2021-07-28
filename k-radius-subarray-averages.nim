# K Radius Subarray Averages
proc malloc(size: csize_t): pointer {.importc.}

type cintA = ptr UncheckedArray[cint]

proc getAverages(nums: cintA; n, k: int; returnSize: ptr cint): cintA {.exportc.} =
  result = c