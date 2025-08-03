#include <iostream>
#include <unordered_set>
using namespace std;

#define MAX_N 500

int main() {
    int n, m;
    string A[MAX_N], B[MAX_N];
    int ans = 0;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> A[i];
    for (int i = 0; i < n; i++)
        cin >> B[i];

    // 서로 다른 세 자리의 조합을 모두 순회
    for (int i = 0; i < m; i++) {
        for (int j = i + 1; j < m; j++) {
            for (int k = j + 1; k < m; k++) {
                unordered_set<string> s;

                // A 그룹의 부분 문자열 저장
                for (int a = 0; a < n; a++) {
                    string key = "";
                    key += A[a][i];
                    key += A[a][j];
                    key += A[a][k];
                    s.insert(key);
                }

                // B 그룹과 겹치는지 검사
                bool valid = true;
                for (int b = 0; b < n; b++) {
                    string key = "";
                    key += B[b][i];
                    key += B[b][j];
                    key += B[b][k];
                    if (s.find(key) != s.end()) {
                        valid = false;
                        break;
                    }
                }

                if (valid) ans++;
            }
        }
    }

    cout << ans;
    return 0;
}
