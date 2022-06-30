# Recover the Original Array
import std/[algorithm, sequtils]

type cintA = ptr UncheckedArray[cint]
proc malloc(size: csize_t): pointer {.importc.}

proc recover(a: seq[cint], used: var seq[int8], d: cint): seq[cint] {.exportc.} =
  var res: seq[cint]
  var j = 0
  let n = a.len
  for i in 0..<n:
    let x = a[i]
    if used[i] != 0: continue
    while j < n and a[j] < a[i]+d:
      j += 1
    if not (j < n and a[j] == a[i]+d): break
    used[j] = 1
    j += 1
    res.add x+(d shr 1)
  if res.len * 2 != n:
    res.setLen 0
  while j > 0:
    j -= 1
    used[j] = 0
  return res

proc recoverArray(nums: cintA, n: int, returnSize: ptr cint): cintA {.exportc.} =
  var a = nums.toOpenArray(0, n-1).