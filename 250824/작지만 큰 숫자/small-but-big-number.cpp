#include <iostream>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    if (!(cin >> N >> M)) return 0;

    set<long long> s;            // 서로 다른 수 → set 사용
    for (int i = 0; i < N; ++i) {
        long long x; cin >> x;
        s.insert(x);
    }

    for (int i = 0; i < M; ++i) {
        long long q; cin >> q;
        auto it = s.upper_bound(q);  // q보다 큰 첫 원소
        if (it == s.begin()) {
            cout << -1 << '\n';      // q 이하가 없음
        } else {
            --it;                    // q 이하 중 가장 큰 값
            cout << *it << '\n';
            s.erase(it);             // 한 번 사용한 수는 제거
        }
    }
    return 0;
}
