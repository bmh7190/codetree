#include<set>
#include<iostream>

using namespace std;

int main() {
	int n, m;
	set<int> s;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;

		s.insert(num);
	}

	for (int i = 0; i < m; i++) {
		int num;
		cin >> num;

		if (s.lower_bound(num) != s.end()) cout << *s.lower_bound(num) << endl;
		else cout << -1 << endl;
	}
}