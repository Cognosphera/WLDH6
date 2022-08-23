# Smallest Subsequence of Distinct Characters
proc malloc(size: csize_t): pointer {.importc.}

proc smallestSubsequence*(s: cstring): cstring {.exportc.} =
  var
    last: array[26, int]
    ins: array[26, bool]
    r = ""
  for i in 0..s.high: last[s[i].ord-'a'.ord] = i
  for i in 0..s.high:
    if not ins[s[i].ord-'a'.ord]:
      while r.len > 0 and