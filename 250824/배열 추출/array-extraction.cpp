#include <iostream>
#include <queue>

using namespace std;

int n;
priority_queue<int> pq;  

int main() {

    cin >> n;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        
        if(x != 0) {

            pq.push(x);
        }
        else {

            if(pq.empty())
                cout << 0 << endl;
            else {
                cout << pq.top() << endl;
                pq.pop();
            }
        }
    }
    return 0;
}
