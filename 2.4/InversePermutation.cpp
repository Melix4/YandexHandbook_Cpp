#include <iostream>
#include <vector>

int main() {
    int n, x;
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 1; i <= n; ++i) {
        std::cin >> x;
        arr[--x] = i;
    }

    for (int elem: arr) {
        std::cout << elem << " ";
    }
}
