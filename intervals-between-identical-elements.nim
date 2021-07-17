# Intervals Between Identical Elements
import std/[sequtils, tables]

type cintA = ptr UncheckedArray[cint]
type intA = ptr UncheckedArray[int]
proc malloc(size: csize_t): pointer {.importc.}

proc getDistances(a: cintA, n: int, returnSize