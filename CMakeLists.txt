cmake_minimum_required(VERSION 3.21.1)
project(essentialcpp)

add_executable(essentialcpp Chapter1/Exercise1-7.cpp) # 生成可执行文件
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set_property(TARGET essentialcpp PROPERTY CXX_STANDARD 11)
#ADD_COMPILE_OPTIONS(-std=c++11 )
#ADD_COMPILE_OPTIONS(-std=c++14 )
#set( CMAKE_CXX_FLAGS "-std=c++14 -O3" )

#find_package(Boost 1.79.0 REQUIRED COMPONENTS filesystem)
#include_directories(${Boost_INCLUDE_DIRS})

#include_directories("/usr/local/Cellar/eigen/3.4.0_1/include/eigen3/")

#set(CMAKE_PREFIX_PATH /usr/local/Cellar/libtorch/1.11.0_1)
#find_package(Torch REQUIRED)
#include_directories(/usr/local/Cellar/libtorch/1.11.0_1/include)
#include_directories(/usr/local/Cellar/libtorch/1.11.0_1/include/torch/csrc/api/include/torch)

#target_link_libraries(essentialcpp "${TORCH_LIBRARIES}")

#find_package(Torch REQUIRED)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${TORCH_CXX_FLAGS}")
#if (MSVC)
#    file(GLOB TORCH_DLLS "${TORCH_INSTALL_PREFIX}/lib/*")
#    add_custom_command(TARGET example-app
#            POST_BUILD
#            COMMAND ${CMAKE_COMMAND} -E copy_if_different
#            ${TORCH_DLLS}
#            $<TARGET_FILE_DIR:example-app>)
#endif (MSVC)