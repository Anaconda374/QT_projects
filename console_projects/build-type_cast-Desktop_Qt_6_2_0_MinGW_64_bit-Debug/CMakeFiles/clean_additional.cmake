# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\type_cast_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\type_cast_autogen.dir\\ParseCache.txt"
  "type_cast_autogen"
  )
endif()
