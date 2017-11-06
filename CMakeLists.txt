cmake_minimum_required(VERSION 3.0.0)
project(GlobalsDemo CXX)
set(CMAKE_CXX_STANDARD 11)

add_library(Static STATIC Static.cpp)
set_property(TARGET Static PROPERTY POSITION_INDEPENDENT_CODE ON)

add_library(Dynamic SHARED Dynamic.cpp)
target_link_libraries(Dynamic PRIVATE Static)

add_executable(StillBoom Main.cpp)
target_link_libraries(StillBoom
    PRIVATE Static
    PRIVATE Dynamic)
