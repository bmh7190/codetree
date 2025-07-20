#include <iostream>
#include <unordered_map>

using namespace std;

#define MAX_N 100000

// 변수 선언
int arr[MAX_N];

int main() {
    int n, k;
    unordered_map<long long, int> count;

    // 입력:
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ans = 0;

    for (int i = 0; i < n; i++) {
        long long diff = (long long)k - arr[i];
        ans += count[diff];

        count[arr[i]]++;
    }

    cout << ans;
    return 0;
}
