# Walking Robot Simulation II
type cintA = ptr UncheckedArray[cint]
type Robot {.exportc.} = object
  w, h, d, x, y: cint

proc malloc(size: csize_t): pointer {.importc.}

proc robotCreate(width: cint, height: cint): ptr Robot {.exportc.} =
  result = create(Robot)
  result[] = Robot(w: width,