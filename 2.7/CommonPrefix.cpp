#include <iostream>
#include <string>
#include <vector>

std::string CommonPrefix(const std::vector<std::string> &words);

std::string CommonPrefix(const std::vector<std::string> &words) {
    if (words.empty())
        return "";

    std::string common_prefix = "";

    size_t i = 0;
    bool fl = true;
    while (fl) {
        for (auto &word: words)
            if (i == word.size())
                fl = false;
        if (fl) {
            bool fl2 = true;
            for (auto &word: words)
                if (word[i] != words[0][i])
                    fl2 = false;
            if (fl2)
                common_prefix += words[0][i];
            else
                fl = false;
        }
        i++;
    }
    return common_prefix;
}
