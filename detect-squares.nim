# Detect Squares
import tables

const N = 1001

type DetectSquares {.exportc.} = object
  ls: Table[int, seq[int]]
  rs: Table[int, seq[int]]
  c: seq[int]

proc detectSquaresCreate(): ptr DetectSquares {.exportc.} =
  result = create DetectSquares
  result[] = DetectSquares(ls: initTable[int, seq[int]](), rs: initTable[int, seq[int]](), c: newSeq[int](N*N))

proc detectSquaresAdd(obj: ptr DetectSquares, point: ptr UncheckedArray[cint], pointSize: cint) {.exportc.} =
  let (x, y) = (cast[int](point[0]), cast[int](point[1]))
  obj.ls.mgetOrPut(x+y, @[]).add(y)
  obj.rs.mgetOrPut(x-y, @[]).add(y)
  obj.c[