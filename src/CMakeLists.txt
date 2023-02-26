# set(CMAKE_TOOLCHAIN_FILE "${CMAKE_CURRENT_SOURCE_DIR}/../submodules/vcpkg/scripts/buildsystems/vcpkg.cmake" CACHE STRING "Vcpkg toolchain file")

project(testing_training)
cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)

find_package(gtest REQUIRED)
find_package(glog REQUIRED)

add_executable(${PROJECT_NAME} src/main.cpp)