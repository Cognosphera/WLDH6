# Recover the Original Array
import std/[algorithm, sequtils]

type cintA = ptr UncheckedArray[cint]
proc malloc(size: csize_t): pointer {.importc.}

proc