#include <iostream>
#include <tuple>
#include <set>

#define MAX_N 100000

using namespace std;

// 변수 선언
int n, m;

pair<int, int> points[MAX_N];
set<pair<int, int> > s;

int main() {
    // 입력:
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        points[i] = make_pair(x, y);
    }

    // treeset에 모든 점을 넣어줍니다.
    for(int i = 0; i < n; i++)
        s.insert(points[i]);
    
    // m개의 질의에 대해 숫자 k보다 
    // x값이 같거나 큰 점 중 x값이 가장 작은 점을 찾습니다.
    // x값이 가장 작은 점이 여러 개일 경우 
    // y값이 가장 작은 점이 나오도록 하려면, 
    // (x, -1)로 조회하여 x가 같을 때 y값이 -1보다 큰
    // 최초의 위치가 나올 수 있도록 해야 함에 유의합니다.
    while(m--) {
        int k;
        cin >> k;

        // 만약 해당하는 점이 없다면, -1 -1을 출력합니다.
        if(s.upper_bound(make_pair(k, -1)) == s.end())
            cout << "-1 -1" << endl;
        // 그러한 점이 있다면 해당 점을 출력하고 제외해줍니다.
        else {
            pair<int, int> target = *s.upper_bound(make_pair(k, -1));
            int x, y;
            tie(x, y) = target;

            cout << x << " " << y << endl;
            s.erase(target);
        }
    }
    return 0;
}
