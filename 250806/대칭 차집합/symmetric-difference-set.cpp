#include<iostream>
#include<unordered_set>

using namespace std;

int main() {
	int n;
	int m;
	int count = 0;

	unordered_set<int> s;

	cin >> n >> m;

	while (n--) {
		int num;

		cin >> num;

		s.insert(num);
	}


	while (m--) {
		int ans;
		cin >> ans;

		if (s.find(ans) != s.end()) {
			count++;
		}
	}

	cout << count << "\n";


}