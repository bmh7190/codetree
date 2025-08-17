#include <iostream>
#include <set>

#define MAX_N 100000

using namespace std;

// 변수 선언
int n, m;
int arr[MAX_N];

set<int> seats;

int main() {
    // 입력:
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    // 1번부터 m번까지 전부 비어져 있으므로
    // 빈 위치를 treeset으로 관리합니다.
    for(int i = 1; i <= m; i++)
        seats.insert(i);

    int ans = 0;

    for(int i = 0; i < n; i++) {
        set<int>::iterator idx = seats.upper_bound(arr[i]);

        if(idx != seats.begin()) {
            idx--;
            seats.erase(*idx);
            
            // 답을 갱신해줍니다.
            ans++;
        }
        else
            break;
    }

    cout << ans;
    return 0;
}
