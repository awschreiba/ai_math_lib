#include <gtest/gtest.h>
#include "../include/neural_math.h"
#include <vector>
#include <stdexcept>

TEST(NeuralMathTest, ReluFunctionWorks) {
    std::vector<float> data = {-1.0f, 0.0f, 2.5f, -3.2f};
    ai_math::relu(data);
    
    EXPECT_FLOAT_EQ(data[0], 0.0f);
    EXPECT_FLOAT_EQ(data[1], 0.0f);
    EXPECT_FLOAT_EQ(data[2], 2.5f);
    EXPECT_FLOAT_EQ(data[3], 0.0f);
}

TEST(NeuralMathTest, DotProductValidDimensions) {
    std::vector<std::vector<float>> A = {{1.0f, 2.0f}}; 
    std::vector<std::vector<float>> B = {{3.0f}, {4.0f}}; 
    
    auto result = ai_math::dot_product(A, B);
    
    ASSERT_EQ(result.size(), 1);
    ASSERT_EQ(result[0].size(), 1);
    EXPECT_FLOAT_EQ(result[0][0], 11.0f);
}


TEST(NeuralMathTest, DotProductInvalidDimensionsThrows) {
    std::vector<std::vector<float>> A = {{1.0f, 2.0f}};
    std::vector<std::vector<float>> B = {{3.0f, 4.0f}}; 
    

    EXPECT_THROW(ai_math::dot_product(A, B), std::invalid_argument);
}