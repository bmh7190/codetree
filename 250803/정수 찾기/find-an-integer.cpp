#include<iostream>
#include<unordered_set>

using namespace std;

int main() {
	int n;
	int m;

	unordered_set<int> s;

	cin >> n;

	while (n--) {
		int num;

		cin >> num;

		s.insert(num);
	}

	cin >> m;

	while (m--) {
		int ans;
		cin >> ans;

		cout << (int)(s.find(ans) != s.end()) << endl;
	}


}