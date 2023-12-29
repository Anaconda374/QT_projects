# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\qdate_qtime_qdatetime_tipos_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\qdate_qtime_qdatetime_tipos_autogen.dir\\ParseCache.txt"
  "qdate_qtime_qdatetime_tipos_autogen"
  )
endif()
