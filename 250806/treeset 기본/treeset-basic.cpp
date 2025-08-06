#include<set>
#include<iostream>
#include<string>
using namespace std;

int main() {

	int n;
	set<int> s;

	cin >> n;

	while (n--) {
		string command;
		int num;

		cin >> command;

		if (command == "add") {
			cin >> num;
			s.insert(num);
		}

		else if (command == "remove") {
			cin >> num;
			s.erase(num);
		}

		else if (command == "find") {
			cin >> num;
			if (s.find(num) != s.end()) cout << "true" << endl;
			else cout << "false" << endl;
		}

		else if (command == "lower_bound") {
			cin >> num;
			if (s.lower_bound(num) != s.end()) cout << *s.lower_bound(num) << endl;
			else cout << "None" << endl;
		}

		else if (command == "upper_bound") {
			cin >> num;
			if (s.upper_bound(num) != s.end()) cout << *s.upper_bound(num) << endl;
			else cout << "None" << endl;
		}

		else if (command == "largest") {
			if (s.size() != 0) {
				cout << *s.rbegin() << endl;
			}

			else cout << "None" << endl;
		}

		else {
			if (s.size() != 0) { cout << *s.begin() << endl; }
			else cout << "None" << endl;
		}
	}
}