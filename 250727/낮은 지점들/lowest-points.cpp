#include <iostream>
#include <unordered_map>
#include <limits>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_map<int, int> minY;

    while (n--) {
        int x, y;
        cin >> x >> y;

        if (minY.find(x) == minY.end()) {
            minY[x] = y;
        } else {
            minY[x] = min(minY[x], y);
        }
    }

    long long sum = 0;
    for (const auto& [x, y] : minY) {
        sum += y;
    }

    cout << sum << '\n';
}
