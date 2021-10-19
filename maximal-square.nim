type Arr[T] = ptr UncheckedArray[T]

proc maximalSquare(a: Arr[Arr[char]], m: int, ns: Arr[cint]): cint {.exportc.} =
  if m == 0: return 0
  let n = ns[0]