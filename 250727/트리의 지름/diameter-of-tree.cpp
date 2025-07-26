#include <iostream>
#include <vector>

#define MAX 100002

using namespace std;

vector<pair<int, int>> edge[MAX];
bool visited[MAX];
int dist[MAX];

// DFS 함수
void DFS(int x, int total_dist) {
    for (int i = 0; i < edge[x].size(); i++) {
        int next = edge[x][i].first;
        int weight = edge[x][i].second;

        if (!visited[next]) {
            visited[next] = true;
            dist[next] = total_dist + weight;
            DFS(next, dist[next]);
        }
    }
}

// 배열 초기화 함수
void reset(int n) {
    for (int i = 1; i <= n; i++) {
        visited[i] = false;
        dist[i] = 0;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n - 1; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        edge[u].emplace_back(v, w);
        edge[v].emplace_back(u, w);
    }

    // 1차 DFS
    reset(n);
    visited[1] = true;
    DFS(1, 0);

    int max_dist = 0;
    int far_node = 1;
    for (int i = 1; i <= n; i++) {
        if (dist[i] > max_dist) {
            max_dist = dist[i];
            far_node = i;
        }
    }

    // 2차 DFS
    reset(n);
    visited[far_node] = true;
    DFS(far_node, 0);

    int diameter = 0;
    for (int i = 1; i <= n; i++) {
        if (dist[i] > diameter)
            diameter = dist[i];
    }

    cout << diameter << "\n";
    return 0;
}
