# Count Square Submatrices with All Ones
type Arr[T] = ptr UncheckedArray[T]

proc countSquares(a: Arr[Arr[cint]], m: int, ns: Arr[cint]): cint