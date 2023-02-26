cmake_policy(SET CMP0048 NEW)

project(testing_training VERSION 1.0.0)
cmake_minimum_required(VERSION 3.20)
set(THREADS_PREFER_PTHREAD_FLAG ON)

set(CMAKE_CXX_STANDARD 17)

include_directories(inc/*.h)

find_package(glog CONFIG REQUIRED)
find_package(GTest CONFIG REQUIRED)
find_package(Threads REQUIRED)

enable_testing()
add_executable(main_tesing src/main.cpp)

target_link_libraries(main_tesing PRIVATE Threads::Threads)
target_link_libraries(main_tesing PRIVATE glog::glog)
target_link_libraries(main_tesing PRIVATE GTest::gtest_main)