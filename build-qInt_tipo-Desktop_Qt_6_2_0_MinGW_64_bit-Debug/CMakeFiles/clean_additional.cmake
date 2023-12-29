# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\qInt_tipo_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\qInt_tipo_autogen.dir\\ParseCache.txt"
  "qInt_tipo_autogen"
  )
endif()
