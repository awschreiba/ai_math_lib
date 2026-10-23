#include "neural_math.h"
#include <cmath>
#include <stdexcept>

namespace ai_math {

    void relu(std::vector<float>& data) {
        for (auto& val : data) {
            if (val < 0.0f) {
                val = 0.0f;
            }
        }
    }


    void sigmoid(std::vector<float>& data) {
        for (auto& val : data) {
            val = 1.0f / (1.0f + std::exp(-val));
        }
    }

    std::vector<std::vector<float>> dot_product(
        const std::vector<std::vector<float>>& A, 
        const std::vector<std::vector<float>>& B) 
    {
        if (A.empty() || B.empty() || A[0].size() != B.size()) {
            throw std::invalid_argument("Error: Matrix dimensions do not match for dot product.");
        }

        size_t rowsA = A.size();
        size_t colsA = A[0].size();
        size_t colsB = B[0].size();

        std::vector<std::vector<float>> result(rowsA, std::vector<float>(colsB, 0.0f));

        for (size_t i = 0; i < rowsA; ++i) {
            for (size_t j = 0; j < colsB; ++j) {
                for (size_t k = 0; k < colsA; ++k) {
                    result[i][j] += A[i][k] * B[k][j];
                }
            }
        }
        return result;
    }

} //namespace ai_math