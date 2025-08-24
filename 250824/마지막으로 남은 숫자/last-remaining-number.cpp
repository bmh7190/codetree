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


    for(int i = 0; i < n; i++)
        pq.push(arr[i]);

    while(pq.size() >= 2) {
        int x = pq.top(); pq.pop();
        int y = pq.top(); pq.pop();

        int diff = x - y;
        if(diff != 0)
            pq.push(diff);
    }


    if(pq.size() == 1)
        cout << pq.top();
    else
        cout << -1;
    return 0;
}
