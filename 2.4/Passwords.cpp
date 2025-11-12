#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string password;
    std::cin >> password;

    if (password.size() < 8 || password.size() > 14) {
        std::cout << "NO";
        return 0;
    }

    bool fl = true;
    int big_alpha = 0, little_alpha = 0, digits = 0, special = 0;
    fl = true;

    for (size_t i = 0; i != password.size(); ++i) {
        char c = password[i];
        if (int(c) < 33 || int(c) > 126) {
            fl = false;
            break;
        }
        if (isalpha(c)) {
            if (islower(c)) little_alpha = 1;
            if (isupper(c)) big_alpha = 1;
        }
        else
            if (isdigit(c))
                digits = 1;
            else
                special = 1;
    }
    if (!fl) {
        std::cout << "NO";
        return 0;
    }
    if (big_alpha + little_alpha + digits + special >= 3)
        std::cout << "YES";
    else
        std::cout << "NO";
}