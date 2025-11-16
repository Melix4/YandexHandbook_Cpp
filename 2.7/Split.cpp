#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> Split(const std::string& str, char delimiter);

std::vector<std::string> Split(const std::string& str, char delimiter) {
    std::vector<std::string> res;
    std::string cur = "";
    for (size_t i = 0; i != str.size(); ++i) {
        if (str[i] == delimiter) {
            res.push_back(cur);
            cur = "";
        }
        else cur += str[i];
    }
    res.push_back(cur);
    return res;
}