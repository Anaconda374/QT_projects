# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\qMap_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\qMap_autogen.dir\\ParseCache.txt"
  "qMap_autogen"
  )
endif()
