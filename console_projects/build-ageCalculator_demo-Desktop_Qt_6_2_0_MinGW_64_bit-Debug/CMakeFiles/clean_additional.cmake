# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\ageCalculator_demo_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\ageCalculator_demo_autogen.dir\\ParseCache.txt"
  "ageCalculator_demo_autogen"
  )
endif()
