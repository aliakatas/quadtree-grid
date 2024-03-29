cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(message_logger VERSION 0.1)

add_library(message_logger src/qgmmessage.cpp)

target_include_directories(message_logger PUBLIC
                        "include"
                        )