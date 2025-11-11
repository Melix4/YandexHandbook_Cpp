#include <iostream>

int main() {
    int n, sign = 1;
    double res = 0;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        res += (1.0 / i) * sign;
        sign *= -1;
    }
    std::cout << res;
}