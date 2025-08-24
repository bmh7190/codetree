#include <iostream>
#include <queue>
#include <string>

using namespace std;

// 변수 선언
int n;
priority_queue<int> pq;  

int main() {
    // 입력:
    cin >> n;

    for(int i = 0; i < n; i++) {
        string command;
        cin >> command;
        if(command == "push") {
            int x;
            cin >> x;
            pq.push(x);
        }
        else if(command == "pop") {
            int v = pq.top();
            pq.pop();
            cout << v << endl;
        }
        else if(command == "size") {
            cout << pq.size() << endl;
        }
        else if(command == "empty") {
            if(pq.empty())
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
        else {
            cout << pq.top() << endl;
        }
    }
    return 0;
}
