#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>

#define MAX 100000

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    int arr[MAX];
    unordered_map<int, int> count;

    cin >> n >> k;

    // 입력 및 숫자 세기
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        count[arr[i]]++;
    }

    vector<pair<int, int>> v;

    // 중복 없이 {등장 횟수, 숫자} 넣기
    for (auto& it : count) {
        v.push_back({ it.second, it.first }); // {frequency, number}
    }

    // 정렬: 등장 횟수 내림차순 → 숫자 내림차순
    sort(v.begin(), v.end(), [](pair<int, int>& a, pair<int, int>& b) {
        if (a.first != b.first) return a.first > b.first;  // frequency desc
        return a.second > b.second;                        // number desc
        });

    // 상위 k개 출력
    for (int i = 0; i < k && i < v.size(); i++) {
        cout << v[i].second << " ";
    }

    return 0;
}
