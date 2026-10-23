#ifndef NEURAL_MATH_H
#define NEURAL_MATH_H

#include <vector>

namespace ai_math {

    void relu(std::vector<float>& data);


    void sigmoid(std::vector<float>& data);

    std::vector<std::vector<float>> dot_product(
        const std::vector<std::vector<float>>& A,
        const std::vector<std::vector<float>>& B
    );

}

#endif // NEURAL_MATH_H