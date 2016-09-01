cmake_minimum_required(VERSION 2.8)
project(caf_examples CXX)

set(CMAKE_CXX_FLAGS "-std=c++11 -Wextra -Wall -pedantic")

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}")

add_custom_target(all_examples)

find_package(CAF COMPONENTS core io REQUIRED)

include_directories(${CAF_INCLUDES})

macro(add name)
  add_executable(${name} ${name}.cpp ${ARGN})
  target_link_libraries(${name}
                        ${CAF_LIBRARIES})
  add_dependencies(${name} all_examples)
endmacro()

# basic message passing primitives
add(program1)
add(program2)
add(program3)
add(program4)
add(program5)
