import strutils

proc calculate(s: cstring): cint {.exportc.} =
  var
    i = 0
    sign = 1
    sum = 0
  while s[i].isSpaceAscii: inc i
  if s[i] == '-':
    inc i
    sign = -1

  while true:
    while s[i].isSpaceAscii: inc i
    var x = s[i].ord-'0'.ord
    while (inc i; s[i].isDigit): x = x*10+s[i].ord-'0'.ord

    while (wh