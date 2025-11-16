#include <iostream>
#include <string>
#include <vector>

std::string Join(const std::vector<std::string>& tokens, char delimiter);

std::string Join(const std::vector<std::string>& tokens, char delimiter) {
    std::string res = "";
    for (auto &token: tokens)
        res = res + token + delimiter;
    res.pop_back();
    return res;
}