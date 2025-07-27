#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string word;
    unordered_map<char, int> m;

    cin >> word;

    // 빈도수 계산
    for (char ch : word) {
        m[ch]++;
    }

    // 처음으로 1번만 등장한 문자 출력
    for (char ch : word) {
        if (m[ch] == 1) {
            cout << ch << endl;
            return 0;
        }
    }

    cout << "None";

    return 0;
}