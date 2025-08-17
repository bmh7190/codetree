#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main() {

	int n, k;
	set<int> s;
	cin >> n >> k;


	while (n--) {

		int temp;

		cin >> temp;

		s.insert(-temp);

	}
		
	// cnt : 출력한 숫자의 개수
	int cnt = 0;

	// iterator를 이용해 가장 큰 k개의 숫자를 출력합니다.
	for (set<int>::iterator it = s.begin(); cnt < k; it++) {
		cout << -*it << " ";
		cnt++;
	}
	
}