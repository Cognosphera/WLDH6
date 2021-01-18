proc countDigits(num: cint): cint {.exportc.} =
  var
    x = num
    s = 0
  while x > 0:
    if n