#include <iostream>
#include <string>
#include <vector>

std::vector<std::vector<int>> Transpose(const std::vector<std::vector<int>>& matrix);

std::vector<std::vector<int>> Transpose(const std::vector<std::vector<int>>& matrix) {
    int i, j, n, m;
    // n - кол-во строк матрицы, m - кол-во столбцов
    n = static_cast<int>(matrix.size());
    m = static_cast<int>(matrix[0].size());
    std::vector<std::vector<int>> res(m, std::vector<int> (n));

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            res[j][i] = matrix[i][j];
    return res;
}