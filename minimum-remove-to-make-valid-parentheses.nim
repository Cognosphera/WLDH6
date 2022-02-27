# Minimum Remove to Make Valid Parentheses
proc malloc(size: csize_t): pointer {.importc.}

proc minRemoveToMakeValid(s: cstring): cstring {.exportc.} =
  var
    s = s
    l = newSeq[int]()
    r = newSeq[int]()
    res = $s
    n = 0
  for i i