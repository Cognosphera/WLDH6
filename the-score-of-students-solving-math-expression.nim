import std/[sequtils, sets]

proc scoreOfStudents(s: cstring, answers: ptr UncheckedArray[cint], answersSize: cint): cint {.exportc.} =
  let
    len = s.len
    n = (len+1) shr 1
  var
    nums = newSeq[int](n)
    ops = newSeq[char](n)
    expected = 0
    b = newSeqWith(n, newSeqWith(n, newSeq[int]()))
    tmp = initHashSet[int]()
  for i in 0..<n:
    nums[i] = s[2*i].ord-'0'.ord
    ops[i] = s[2*i+1]
  var i = 0
  while i < n:
    var x = nums[i]
    while ops[i] == '*':
      inc i
      x *= nums[i]
    expec