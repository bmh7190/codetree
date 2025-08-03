#include <iostream>
#include <unordered_set>

#define MAX_N 100000

using namespace std;

// 변수 선언
int n;
int arr[MAX_N];
unordered_set<int> s;

int main() {
    // 입력:
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];
        
    for(int i = 0; i < n; i++)
        s.insert(arr[i]);
    
    cout << (int) s.size();
    return 0;
}
