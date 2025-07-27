#include<iostream>
#include<string>
#include<algorithm>
#include<unordered_map>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;
	unordered_map<string, int> m;

	for (int i = 0; i < n; i++) {
		string word;
		cin >> word;
		sort(word.begin(), word.end());
		m[word]++;
	}

	int max_value = 0;

	for (auto iter = m.begin(); iter != m.end(); iter++) {
		max_value = max(max_value, iter->second);
	}

	cout << max_value;

	return 0;



	

}