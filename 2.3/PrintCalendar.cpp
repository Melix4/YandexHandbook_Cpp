#include <iostream>
#include <iomanip>

int main() {
    int n, k, i, day = 1;
    std::cin >> n >> k;
    // Вывод первой строки
    for (i = 0; i < n - 1; i++)
        std::cout << "   ";
    for (i = n; i < std::min(k + n, 7); i++) {
        if (day == k) {
            std::cout << std::setw(2) << day;
            return 0;
        }
        std::cout << std::setw(2) << day << " ";
        day++;
    }
    std::cout << std::setw(2) << day << "\n";
    day++;

    // Вывод всех строк, кроме последней
    while (day + 7 <= k) {
        for (i = 0; i < 6; i++) {
            std::cout << std::setw(2) << day << " ";
            day++;
        }
        std::cout << std::setw(2) << day << "\n";
        day++;
    }

    // Вывод последней строки
    while (day < k) {
        std::cout << std::setw(2) << day << " ";
        day++;
    }
    if (day == k)
        std::cout << std::setw(2) << day;
}