#include <iostream>
#include <deque>
#include <string>

std::deque <std::string> q;

int main() {
    std::string name, type;
    int n, m, index;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> name >> type;
        if (type == "top")
            q.push_front(name);
        else
            q.push_back(name);
    }
    std::cin >> m;
    for (int i = 0; i < m; i++) {
        std::cin >> index;
        std::cout << q[index - 1] << "\n";
    }
}