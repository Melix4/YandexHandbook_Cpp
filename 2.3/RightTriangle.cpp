#include <iostream>
#include <cmath>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    if (a == hypot(b, c) || b == hypot(a, c) || c == hypot(a, b))
        std::cout << "YES\n";
    else
        if (a >= b + c || b >= a + c || c >= a + b)
            std::cout << "UNDEFINED\n";
        else
            std::cout << "NO\n";
}