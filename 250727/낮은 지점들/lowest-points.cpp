#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	vector<pair<int, int>> pos;
	unordered_map<int, int> m;

	cin >> n;


	// 입력
	while (n--) {
		int x, y;

		cin >> x >> y;

		// 중복된 경우
		if (m.find(x) != m.end()) {

			// 큰건 삭제
			if (m[x] > y) {
				m[x] = y;
			}
		}
		else {
			m[x] = y;
		}

	}

	int ans = 0;

	// 계산
	for (auto iter = m.begin(); iter != m.end(); ++iter) {
		ans = ans + iter->second;
	}

	cout << ans;
}