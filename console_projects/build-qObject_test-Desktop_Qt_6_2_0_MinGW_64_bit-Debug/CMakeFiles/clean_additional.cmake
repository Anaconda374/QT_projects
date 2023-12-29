# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\qObject_test_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\qObject_test_autogen.dir\\ParseCache.txt"
  "qObject_test_autogen"
  )
endif()
