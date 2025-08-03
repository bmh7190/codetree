#include<iostream>
#include<map>
using namespace std;

int main() {
	
	int n;
	map<int, int> m;

	cin >> n;

	for (int i = 0; i < n; i++) {
		string command;

		cin >> command;

		if (command == "add") {
			int num1, num2;

			cin >> num1 >> num2;

			m[num1] = num2;
		}

		else if (command == "find") {
			int num;

			cin >> num;

			if (m.find(num) == m.end()) {
				cout << "None" << endl;	
			}
			else {
				cout << m[num] << endl;
			}
		}

		else if (command == "print_list") {

			if (m.empty()) {
				cout << "None" << endl;
				continue;
			}
			map<int, int>::iterator it;	

			for (it = m.begin(); it != m.end(); it++) {
				cout << it->second << " ";
			}

			cout << endl;
		}

		else {
			int num;
			cin >> num;
			if (m.find(num) == m.end()) {
				cout << "None" << endl;
			}
			else {
				m.erase(num);
			}
		}
	}
}