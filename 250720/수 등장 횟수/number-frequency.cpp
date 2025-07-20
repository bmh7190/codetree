#include <iostream>
#include <unordered_map>

#define MAX_N 100000

using namespace std;

// 변수 선언
int n, m;
int arr[MAX_N];
unordered_map<int, int> freq;

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++) {
        if (freq.find(arr[i]) == freq.end())
            freq[arr[i]] = 1;
        else
            freq[arr[i]]++;
    }

    for (int i = 0; i < m; i++) {
        int num;
        cin >> num;

        if (freq.find(num) == freq.end())
            cout << 0 << " ";
        else
            cout << freq[num] << " ";
    }
    return 0;
}