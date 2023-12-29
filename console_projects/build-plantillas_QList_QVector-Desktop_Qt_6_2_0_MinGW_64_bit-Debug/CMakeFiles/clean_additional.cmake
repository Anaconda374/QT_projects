# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\plantillas_QList_QVector_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\plantillas_QList_QVector_autogen.dir\\ParseCache.txt"
  "plantillas_QList_QVector_autogen"
  )
endif()
