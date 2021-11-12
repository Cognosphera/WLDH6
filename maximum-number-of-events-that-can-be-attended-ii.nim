# Maximum Number of Events That Can Be Attended II
import algorithm

proc maxValue(events: ptr UncheckedArray[ptr UncheckedArray[cint]], n: int, u: pointer, k: int): int {.exportc.} =
  type E = tuple[start,stop,value: int]
  var
