
# Minimum Adjacent Swaps for K Consecutive Ones
proc minMoves(nums: ptr UncheckedArray[cint], n: int, k: int): int {.exportc.} =
  var
    a: seq[int]
    s = 0
  for i in 0..<n:
    if nums[i] > 0: