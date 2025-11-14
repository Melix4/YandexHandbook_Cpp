#include <iostream>
#include <vector>

std::pair<size_t, size_t> MatrixArgMax(const std::vector<std::vector<int> > &matrix);


std::pair<size_t, size_t> MatrixArgMax(const std::vector<std::vector<int> > &matrix) {
    int maxn = matrix[0][0];
    std::pair<size_t, size_t> ans;

    for (size_t i = 0; i != matrix.size(); ++i) {
        for (size_t j = 0; j != matrix[0].size(); ++j) {
            if (matrix[i][j] > maxn) {
                maxn = matrix[i][j];
                ans.first = i;
                ans.second = j;
            }
        }
    }
    return ans;
}
