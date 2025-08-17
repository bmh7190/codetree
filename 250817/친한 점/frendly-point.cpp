#include <iostream>
#include <set>
#include <tuple>

#define MAX_NUM 100000

using namespace std;

// 변수 선언
int n, m;
pair<int, int> points[MAX_NUM];
pair<int, int> queries[MAX_NUM];

set<pair<int, int> > s;

int main() {
    // 입력:
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        points[i] = make_pair(x, y);
    }
    for(int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        queries[i] = make_pair(x, y);
    }
    
    // treeset에 점들을 넣어줍니다.
    for(int i = 0; i < n; i++)
        s.insert(points[i]);
    
    // 질의마다 조건에 맞는 점을 찾아줍니다.
    for(int i = 0; i < m; i++) {
        // 그러한 점이 없다면 -1을 출력합니다.
        if(s.lower_bound(queries[i]) == s.end())
            cout << "-1 -1" << endl;
        // 존재한다면, 그 지점의 값을 출력합니다.
        else {
            int x, y;
            tie(x, y) = *s.lower_bound(queries[i]);
            cout << x << " " << y << endl;
        }
    }

    return 0;
}
