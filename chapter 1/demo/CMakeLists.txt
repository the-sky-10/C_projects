cmake_minimum_required(VERSION 3.5)

project(demo LANGUAGES C)

add_executable(demo main.c)

install(TARGETS demo
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
