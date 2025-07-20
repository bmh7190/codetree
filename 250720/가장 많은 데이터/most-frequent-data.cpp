#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    int max_count = 0; // 가장 많이 등장한 횟수
    cin >> n;

    unordered_map<string, int> string_to_index;

    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;

        string_to_index[temp] += 1; // 등장 횟수 증가

        // 가장 많이 등장한 횟수 갱신
        if (string_to_index[temp] > max_count) {
            max_count = string_to_index[temp];
        }
    }

    cout << max_count << endl; // 결과 출력

    return 0;
}
