#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;
int main() {

	int n;
	unordered_map<int, int> m;

	cin >> n;

	while (n--) {
		
		string command;

		cin >> command;

		if (command == "add") {
			int k;
			int v;

			cin >> k >> v;

			m[k] = v;
		}

		else if (command == "find") {
			int k;

			cin >> k;

			if (m.find(k) == m.end())
				cout << "None" << endl;
			else
				cout << m[k] << endl;
		}

		else {
			int k;
			cin >> k;
			m.erase(k);
		}
		
	}

}