# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "1stProject_test_autogen"
  "CMakeFiles\\1stProject_test_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\1stProject_test_autogen.dir\\ParseCache.txt"
  )
endif()
