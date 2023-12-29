# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\qvariant_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\qvariant_autogen.dir\\ParseCache.txt"
  "qvariant_autogen"
  )
endif()
