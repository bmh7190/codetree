#include <iostream>
#include <algorithm>

#define MAX_N 1000

using namespace std;

int n;
int num[MAX_N][MAX_N];
int dp[MAX_N][MAX_N];

void Initialize() {
    dp[0][n - 1] = num[0][n - 1];

    // 아래로 내려가는 값 초기화
    for (int i = 1; i < n; i++)
        dp[i][n - 1] = dp[i - 1][n - 1] + num[i][n - 1];

    // 왼쪽으로 이동하는 값 초기화
    for (int j = n - 2; j >= 0; j--)
        dp[0][j] = dp[0][j + 1] + num[0][j];
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> num[i][j];

    Initialize();


    for (int i = 1; i < n; i++)
        for (int j = n - 2; j >= 0; j--)
            dp[i][j] = min(dp[i - 1][j], dp[i][j + 1]) + num[i][j];

    cout << dp[n - 1][0];
    return 0;
}
