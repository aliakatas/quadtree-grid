cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(quadtree_grid_generator VERSION 0.1)
configure_file(include/appconfig.h.in include/appconfig.h)

add_executable(quadtree_grid_generator src/main.cpp)

target_include_directories(quadtree_grid_generator PUBLIC
                           "${PROJECT_BINARY_DIR}/include"
                           )

target_link_libraries(quadtree_grid_generator PUBLIC ../engine/message_logger)



