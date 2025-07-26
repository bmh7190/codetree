#include<iostream>
#include<vector>

using namespace std;
vector<int> edge[100002];
bool visited[100002];
int parent[100002];

void Traversal(int x) {
	for (int i = 0; i < edge[x].size(); i++) {
		int y = edge[x][i];

		if (!visited[y]) {
			visited[y] = true;
			parent[y] = x;

			Traversal(y);
		}
		
	}
}

int main() {

	int n;

	cin >> n;

	// 입력
	for (int i = 0; i < n - 1; i++) {
		int u, v;

		cin >> u >> v;

		edge[u].push_back(v);
		edge[v].push_back(u);

	}


	visited[1] = true;

	//순회
	Traversal(1);

	for (int i = 2; i <= n; i++) {
		cout << parent[i] << endl;
	}

}