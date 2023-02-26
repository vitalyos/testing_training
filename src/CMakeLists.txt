cmake_policy(SET CMP0048 NEW)

project(testing_training)
cmake_minimum_required(VERSION 3.20)
set(THREADS_PREFER_PTHREAD_FLAG ON)

set(CMAKE_CXX_STANDARD 17)

enable_testing()

find_package(glog CONFIG REQUIRED)
find_package(GTest CONFIG REQUIRED)
find_package(Threads REQUIRED)

add_executable(${PROJECT_NAME} src/main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE Threads::Threads)
target_link_libraries(${PROJECT_NAME} PRIVATE glog::glog)
target_link_libraries(${PROJECT_NAME} PRIVATE GTest::gtest GTest::gtest_main GTest::gmock GTest::gmock_main)
