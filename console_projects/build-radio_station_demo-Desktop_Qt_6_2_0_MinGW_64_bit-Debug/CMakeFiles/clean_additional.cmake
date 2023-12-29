# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\radio_station_demo_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\radio_station_demo_autogen.dir\\ParseCache.txt"
  "radio_station_demo_autogen"
  )
endif()
