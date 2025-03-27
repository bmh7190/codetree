#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int n, k;
int grid[102][102];
int visited[102][102]; 

int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };

int main() {
    cin >> n >> k;
    queue<pair<int, int> > q;
    

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> grid[i][j];
            
            if (grid[i][j] == 2) {
                q.push({ i,j });
                visited[i][j] = 0;
            }
            else {
                visited[i][j] = -1;
            }

        }
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

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (grid[i][j] == 1) {
                cout << -2 << " ";
            }

            else {
                cout << visited[i][j] << " ";
            }
    
        } 
        cout << endl;
    }
}