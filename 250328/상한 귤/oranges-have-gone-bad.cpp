#include<iostream>
#include<queue>
using namespace std;

int n, k;
int grid[102][102];
int visited[102][102]; // 각 칸이 상하는 데 걸린 시간 저장

int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };

int main() {
    cin >> n >> k;
    queue<pair<int, int> > q;

    int total_oranges = 0; // 귤 있는 칸 세기

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> grid[i][j];

            if (grid[i][j] == 2) {
                q.push({ i, j });
                visited[i][j] = 0;
                total_oranges++;
            }
            else if (grid[i][j] == 1) {
                visited[i][j] = -1;
                total_oranges++;
            }
            else {
                visited[i][j] = -1; // 빈 칸
            }
        }
    }

    // 전체에 귤이 하나도 없다면
    if (total_oranges == 0) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cout << -1 << " ";
            }
            cout << endl;
        }
        return 0;
    }

    while (!q.empty()) {
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if (nx >= 1 && ny >= 1 && nx <= n && ny <= n) {
                if (grid[nx][ny] == 1 && visited[nx][ny] == -1) {
                    visited[nx][ny] = visited[cx][cy] + 1;
                    grid[nx][ny] = 2;
                    q.push({ nx, ny });
                }
            }
        }
    }

    // 출력
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (grid[i][j] == 0) {
                cout << 0 << " ";
            }
            else if (grid[i][j] == 2 && visited[i][j] != -1) {
                cout << visited[i][j] << " ";
            }
            else if (grid[i][j] == 1) {
                // 끝까지 안 상한 귤
                cout << -2 << " ";
            }
            else {
                // 나머지 예외 없이 -1 방지
                cout << visited[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
