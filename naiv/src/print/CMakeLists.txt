SET(dirs vector pointervector
  pairlist matrix comb
  abacus
  set setvector)

FOREACH(dir ${dirs})
    ADD_SUBDIRECTORY(${dir})
ENDFOREACH()
  
