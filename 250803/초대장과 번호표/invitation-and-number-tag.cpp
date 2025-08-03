#include <iostream>
#include <unordered_set>
#include <queue>
#include <vector>

using namespace std;

#define MAX_N 100000
#define MAX_G 250000

int main() {
    int n, g;
    bool invited[MAX_N] = {false};
    unordered_set<int> groups[MAX_G];
    vector<int> people_groups[MAX_N];
    queue<int> q;
    int ans = 0;

    // 입력
    cin >> n >> g;
    for (int i = 0; i < g; i++) {
        int s, x;
        cin >> s;
        for (int j = 0; j < s; j++) {
            cin >> x;
            x--;
            groups[i].insert(x);
            people_groups[x].push_back(i);
        }
    }

    // 초기 상태
    q.push(0);
    invited[0] = true;

    // BFS 전파
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        ans++;

        for (int i = 0; i < (int)people_groups[x].size(); i++) {
            int g_num = people_groups[x][i];
            groups[g_num].erase(x);

            if ((int)groups[g_num].size() == 1) {
                int p_num = *(groups[g_num].begin());
                if (!invited[p_num]) {
                    invited[p_num] = true;
                    q.push(p_num);
                }
            }
        }
    }

    // 출력
    cout << ans;
    return 0;
}
