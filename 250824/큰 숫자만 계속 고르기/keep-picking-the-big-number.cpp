#include <iostream>
#include <queue>

#define MAX_N 100000

using namespace std;

int n, m;
int arr[MAX_N];
priority_queue<int> pq;  

int main() {

    cin >> n >> m;
    for(int i = 0; i < n; i++)
        cin >> arr[i];


    for(int i = 0; i < n; i++)
        pq.push(arr[i]);


    while(m--) {

        int max_val = pq.top();
        pq.pop();
        pq.push(max_val - 1);
    }

    cout << pq.top();
    return 0;
}
