# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "ArithmeticCalculator_autogen"
  "CMakeFiles\\ArithmeticCalculator_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\ArithmeticCalculator_autogen.dir\\ParseCache.txt"
  )
endif()
