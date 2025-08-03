#include<iostream>
#include<map>
#include<iomanip>  // for setprecision

using namespace std;

int main() {
	int n;
	cin >> n;

	int total = n;
	map<string, int> m;

	// 입력
	while (n--) {
		string word;
		cin >> word;
		m[word]++;
	}

	// 출력
	cout << fixed << setprecision(4);

	for (auto it = m.begin(); it != m.end(); ++it) {
		string word = it->first;
		int cnt = it->second;
		double ratio = (double)cnt / total * 100;
		cout << word << " " << ratio << endl;
	}
}
