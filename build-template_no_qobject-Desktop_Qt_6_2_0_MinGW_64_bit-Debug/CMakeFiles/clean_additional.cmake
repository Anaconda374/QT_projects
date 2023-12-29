# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\template_no_qobject_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\template_no_qobject_autogen.dir\\ParseCache.txt"
  "template_no_qobject_autogen"
  )
endif()
