#include <iostream>
#include <set>
#include <string>
#include <tuple>

using namespace std;

// 변수 선언
int n, m;

set<pair<int, int> > problems;

int main() {
    // 입력:
    cin >> n;
    for(int i = 0; i < n; i++) {
        int p, l;
        cin >> p >> l;

        // 주어진 문제를 treeset에 넣어줍니다.
        problems.insert(make_pair(l, p));
    }

    cin >> m;
    // m개의 명령을 수행합니다.
    for(int i = 0; i < m; i++) {
        string command;
        cin >> command;

        if(command == "ad") {
            int p, l;
            cin >> p >> l;

            // 문제를 추가합니다.
            problems.insert(make_pair(l, p));
        }
        else if(command == "sv") {
            int p, l;
            cin >> p >> l;

            // 문제를 제거힙니다.
            problems.erase(make_pair(l, p));
        }
        else {
            int x;
            cin >> x;
            // x가 1이면 난이도가 가장 높은 문제의 번호를 출력합니다.
            if(x == 1) {
                int p, l;
                tie(l, p) = *problems.rbegin();
                cout << p << endl;
            }
            // x가 -1이면 난이도가 가장 낮은 문제의 번호를 출력합니다.
            else {
                int p, l;
                tie(l, p) = *problems.begin();
                cout << p << endl;                
            }
        }
    }
    return 0;
}
