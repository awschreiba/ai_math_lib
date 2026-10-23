cmake_minimum_required(VERSION 3.14)
project(ai_math_lib VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(NeuralMath src/neural_math.cpp)
target_include_directories(NeuralMath PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(main_app src/main.cpp)
target_link_libraries(main_app PRIVATE NeuralMath)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(run_tests tests/test_neural_math.cpp)
target_link_libraries(run_tests PRIVATE NeuralMath GTest::gtest_main)