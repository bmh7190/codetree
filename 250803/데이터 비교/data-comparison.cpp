#include <iostream>
#include <unordered_set>

#define MAX_NUM 100000

using namespace std;

// 변수 선언
int n, m;
int arr1[MAX_NUM];
int arr2[MAX_NUM];

unordered_set<int> set1;

int main() {
    // 입력:
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr1[i];

    cin >> m;
    for(int i = 0; i < m; i++)
        cin >> arr2[i];
    
    for(int i = 0; i < n; i++)
        set1.insert(arr1[i]);
    
    for(int i = 0; i < m; i++) {
        if(set1.find(arr2[i]) == set1.end())
            cout << 0 << " ";
        else
            cout << 1 << " ";
    }

    return 0;
}
