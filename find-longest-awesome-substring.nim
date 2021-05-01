import std/algorithm

proc longestAwesome(s: cstring): int {.exportc} =
  var
    bgn: array[1024, int]
    m = 0
    i = 0
  bgn.f