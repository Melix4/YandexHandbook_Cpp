#include <iostream>
#include <vector>

int main() {
    int n, m, k;
    std::cin >> n >> m >> k;

    // 9 - мина. Для того, чтобы использовать вектор int-ов. При выводе 9 заменим на *
    std::vector <std::vector <int> > arr(n, std::vector <int> (m, 0));
    for (int i = 0; i < k; i++) {
        int x, y;
        std::cin >> x >> y;
        arr[x - 1][y - 1] = 9;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] != 9) {
                int cnt_mines = 0;
                if (i - 1 >= 0 && arr[i - 1][j] == 9) cnt_mines++;
                if (i + 1 < n && arr[i + 1][j] == 9) cnt_mines++;
                if (j - 1 >= 0 && arr[i][j - 1] == 9) cnt_mines++;
                if (j + 1 < m && arr[i][j + 1] == 9) cnt_mines++;
                if (i - 1 >= 0 && j - 1 >= 0 && arr[i - 1][j - 1] == 9) cnt_mines++;
                if (i + 1 < n && j - 1 >= 0 && arr[i + 1][j - 1] == 9) cnt_mines++;
                if (i - 1 >= 0 && j + 1 < m && arr[i - 1][j + 1] == 9) cnt_mines++;
                if (i + 1 < n && j + 1 < m && arr[i + 1][j + 1] == 9) cnt_mines++;

                arr[i][j] = cnt_mines;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            if (arr[i][j] == 9)
                std::cout << "* ";
            else
                std::cout << arr[i][j] << " ";
        std::cout << "\n";
    }
}