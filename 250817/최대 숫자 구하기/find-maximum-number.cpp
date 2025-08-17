#include <iostream>
#include <set>

#define MAX_NUM 100000

using namespace std;

// 변수 선언
int n, m;
int queries[MAX_NUM];

set<int> s;

int main() {
    // 입력:
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        cin >> queries[i];
    
    // treeset에 숫자들을 넣어줍니다.
    for(int i = 1; i <= m; i++)
        s.insert(i);
    
    // 제거 후 최댓값을 출력하는 것을 반복합니다.
    for(int i = 0; i < n; i++) {
        // 해당 값을 제거합니다.
        s.erase(queries[i]);

        // 최댓값을 출력합니다.
        cout << *s.rbegin() << endl;
    }

    return 0;
}


