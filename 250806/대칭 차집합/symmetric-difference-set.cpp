#include<iostream>
#include<unordered_set>

using namespace std;

int main() {
	int n;
	int m;
	int count = 0;

	unordered_set<int> s;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		int num;

		cin >> num;

		s.insert(num);
	}

	for (int i = 0; i < m; i++) {
		int num;
		cin >> num;

		if (s.find(num) != s.end()) {
			count++;
		}
	}

	int ans = n - count + m - count;

	cout << ans << "\n";


}