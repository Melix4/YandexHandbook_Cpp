#include <iostream>
#include <string>
#include <vector>

template <typename T>
void Print(const T& container, const std::string &delimiter) {
    int n = static_cast<int>(container.size()), i = 0;
    for (const auto& elem: container) {
        std::cout << elem;
        if (i != n - 1)
            std::cout << delimiter;
        i++;
    }
    std::cout << "\n";
}