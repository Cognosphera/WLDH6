proc judgePoint24(cards: ptr UncheckedArray[cint], cardsSize: cint): cint {.exportc.} =
  var a: array[4, float]
  proc dfs(n: int): bool =
    if n == 0:
      return abs(a[0]-24) < 1e-8
    for i in 0..n:
      swap a[i], a[n]
      for j in 0..<n:
        let saved = a[j]
        a[j] = a[n-1]
        if (a[n-1]=saved+a[n]; dfs(n-1)) or
           (a[n-1]=saved-a[n]; dfs(n-1)) or
           (a[n-1]=saved*a[n]; dfs(n-1)) or
           (a[n-1]=saved/a[n]; a[n].abs > 1e-8 and dfs(n-1)):
         