# Kth Smallest Product of Two Sorted Arrays
import std/algorithm

proc kthSmallestProduct(a: ptr UncheckedArray[cint], n: int, b: ptr UncheckedArray[cint], m: int, k: int): int64 {.exportc.} =
  var
    a0, a1, b0, b1: seq[cint]
   