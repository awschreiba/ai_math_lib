add_executable(run_tests test_neural_math.cpp)

target_link_libraries(run_tests PRIVATE NeuralMath GTest::gtest_main)
