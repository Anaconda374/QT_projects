# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\parent_hierarchy_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\parent_hierarchy_autogen.dir\\ParseCache.txt"
  "parent_hierarchy_autogen"
  )
endif()
