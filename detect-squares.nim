# Detect Squares
import tables

const N = 1001

type DetectSquares {.exportc.} = object
  ls: Table[in