#include<iostream>
#include<string>
#include<unordered_map>

#define MAX_N 100000
using namespace std;

int n, m;
string words[MAX_N + 1];
unordered_map<string, int> string_to_num;


int main() {

	cin >> n >> m;
	
	//입력
	for (int i = 1; i <= n; i++) {
		cin >> words[i];
		string_to_num[words[i]] = i;
	}

	//찾기
	while (m--) {
		string key;

		cin >> key;

		// 입력값 숫자인 경우
		if ('0' <= key[0] && key[0] <= '9') {
			cout << words[stoi(key)] << endl;
		}
		else {
			cout << string_to_num[key] << endl;
		}
	}
}