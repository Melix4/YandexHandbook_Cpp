#include <iostream>
#include <string>
#include <deque>

std::deque<int> q;

void MakeTrain() {
    std::string command;
    int x;
    while (std::cin >> command >> x) {
        if (command == "+left")
            q.push_front(x);
        if (command == "+right")
            q.push_back(x);
        if (command == "-left")
            while (x-- && !q.empty())
                q.pop_front();
        if (command == "-right")
            while (x-- && !q.empty())
                q.pop_back();
    }
    while (!q.empty()) {
        std::cout << q.front() << " ";
        q.pop_front();
    }
    std::cout << "\n";
}
