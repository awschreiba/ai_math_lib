#include <iostream>
#include <vector>
#include "neural_math.h"

int main() {

    std::vector<float> data = {-1.5f, 2.0f, -0.8f, 3.5f};

    std::cout << "Data before ReLU: ";
    for (float val : data) {
        std::cout << val << " ";
    }
    std::cout << "\n";

    ai_math::relu(data);

    std::cout << "Data after ReLU:  ";
    for (float val : data) {
        std::cout << val << " ";
    }
    std::cout << "\n";

    return 0;
}