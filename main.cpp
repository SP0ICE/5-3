#include <iostream>
#include "LogElement.h"

int main() {
    LogElement elem(1, 1);
    std::cout << "Input 1: " << elem.input1 << std::endl;
    std::cout << "Input 2: " << elem.input2 << std::endl;
    std::cout << "Output: " << elem.output << std::endl;

    return 0;
}