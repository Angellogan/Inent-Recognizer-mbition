cmake_minimum_required(VERSION 3.5)

project(Intent_Recognizer_Mbition LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Intent_Recognizer_Mbition main.cpp)
target_link_libraries(Intent_Recognizer_Mbition pthread)
