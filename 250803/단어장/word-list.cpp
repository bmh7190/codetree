#include<iostream>
#include<map>	

using namespace std;

int main() {

	int n;
	map<string, int> m;
	
	cin >> n;

	while (n--) {
		string word;
		cin >> word;

		m[word]++;
	}

	map<string, int>::iterator it;

	for (it = m.begin(); it != m.end(); it++) {
		cout << it->first << " " << it->second << endl;
	}

}