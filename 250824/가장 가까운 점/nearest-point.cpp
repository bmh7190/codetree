#include <iostream>
#include <queue>
#include <tuple>

#define MAX_N 100000

using namespace std;

pair<int, int> points[MAX_N];
priority_queue<tuple<int, int, int> > pq;
int n, m;

int main() {

    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        points[i] = make_pair(x, y);
    }

    for(int i = 0; i < n; i++) {
        int x, y;
        tie(x, y) = points[i];
        pq.push(make_tuple(-(x + y), -x, -y));
    }


    while(m--) {
        int x, y;
        tie(ignore, x, y) = pq.top();
        x = -x; y = -y;
        pq.pop();

        x += 2; y += 2;
        pq.push(make_tuple(-(x + y), -x, -y));
    }

    int last_x, last_y;
    tie(ignore, last_x, last_y) = pq.top();
    cout << -last_x << " " << -last_y;
    return 0;
}
