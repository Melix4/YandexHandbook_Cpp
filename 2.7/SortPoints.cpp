#include <iostream>
#include <vector>
#include <algorithm>

struct Point {
    int x, y;
};

bool cmp(Point &a, Point &b) {
    return (a.x * a.x) + (a.y * a.y) < (b.x * b.x) + (b.y * b.y);
}

int main() {
    int n;
    std::cin >> n;
    std::vector<Point> points(n);

    for (auto &[x, y]: points)
        std::cin >> x >> y;

    std::sort(points.begin(), points.end(), cmp);

    for (auto &[x, y]: points)
        std::cout << x << " " << y << "\n";
}
