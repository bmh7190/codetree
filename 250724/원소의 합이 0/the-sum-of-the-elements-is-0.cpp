#include <iostream>
#include <unordered_map>

using namespace std;

#define MAX_N 5000

// 변수 선언
int n;
int A[MAX_N], B[MAX_N], C[MAX_N], D[MAX_N];
unordered_map<int, int> freq;

int main() {
    // 입력:
    cin >> n;
    for (int i = 0; i < n; i++) cin >> A[i];
    for (int i = 0; i < n; i++) cin >> B[i];
    for (int i = 0; i < n; i++) cin >> C[i];
    for (int i = 0; i < n; i++) cin >> D[i];

    long long ans = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            freq[A[i] + B[j]]++;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            int diff = -C[i] - D[j];
            if (freq.count(diff) > 0)
                ans += freq[diff];
        }

    // 출력:
    cout << ans;

    return 0;
}
