#include <iostream>
#include <string>

int main() {
    std::string s, tmp = "", res = "";
    std::cin >> s;
    tmp += s[0];
    for (size_t i = 1; i != s.size(); ++i) {
        if (s[i] == 'b' || s[i] == 'f' || s[i] == 'p' || s[i] == 'v')
            tmp += '1';
        if (s[i] == 'c' || s[i] == 'g' || s[i] == 'j' || s[i] == 'k' ||
            s[i] == 'q' || s[i] == 's' || s[i] == 'x' || s[i] == 'z')
            tmp += '2';
        if (s[i] == 'd' || s[i] == 't')
            tmp += '3';
        if (s[i] == 'l')
            tmp += '4';
        if (s[i] == 'm' || s[i] == 'n')
            tmp += '5';
        if (s[i] == 'r')
            tmp += '6';
    }

    for (size_t i = 0; i != tmp.size() - 1; ++i) {
        if (tmp[i] != tmp[i + 1])
            res += tmp[i];
    }
    res += tmp.back();

    if (res.size() > 4)
        res = res.substr(0, 4);
    else
        while (res.size() != 4)
            res += '0';

    std::cout << res;
}