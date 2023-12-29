# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\connection_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\connection_autogen.dir\\ParseCache.txt"
  "connection_autogen"
  )
endif()
