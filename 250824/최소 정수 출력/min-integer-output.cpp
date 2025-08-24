#include <iostream>
#include <queue>

#define MAX_N 100000

using namespace std;

int n;
int arr[MAX_N];
priority_queue<int> pq;  

int main() {

    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < n; i++) {
        
        if(arr[i] != 0)
            pq.push(-arr[i]);
        
        else {
            if(pq.empty())
                cout << 0 << endl;
            else {
                int min_val = -pq.top();
                pq.pop();
                cout << min_val << endl;
            }
        }
    }

    return 0;
}
