cmake_minimum_required(VERSION 3.22)

set(PROGRAM_NAME main)

project(${PROGRAM_NAME})

include_directories(include)

file(GLOB SOURCES "src/*.c")

add_executable(${PROGRAM_NAME} src/main.c)
