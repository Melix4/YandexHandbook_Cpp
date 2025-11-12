#include <iostream>
#include <string>

int main() {
    std::string s, s2 = "", reversed_s = "";
    std::getline(std::cin, s);

    for (int i = 0; i < int(s.size()); ++i)
        if (s[i] != ' ')
            s2 += s[i];
    for (int i = int(s2.size()) - 1; i > -1; i--)
        reversed_s += s2[i];

    if (s2 == reversed_s)
        std::cout << "YES";
    else
        std::cout << "NO";
}