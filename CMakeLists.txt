cmake_minimum_required (VERSION 3.10)

project ("c_1k_1s")

set(CMAKE_C_STANDARD 20)
set(CMAKE_C_STANDARD_REQUIRED ON)

if (LINUX)
 list(APPEND COMMON_DEPS m)
endif()

add_subdirectory("lab01")
