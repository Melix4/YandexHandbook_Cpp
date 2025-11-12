#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string s;
    std::vector <std::string> arr;

    while (std::getline(std::cin, s)) {
        arr.push_back(s);
    }

    for (size_t i = 0; i != arr.size(); ++i) {
        for (size_t j = 0; j != arr.size() - i - 1; j++) {
            if (arr[j] < arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }

    for (auto &x: arr)
        std::cout << x << "\n";
}