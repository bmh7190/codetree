#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

// 변수 선언
int n;
unordered_set<int> s;

int main() {
    // 입력:
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        string command; int x;
        cin >> command >> x;

        if(command == "add") {
            s.insert(x);
        }
        else if(command == "remove") {
            s.erase(x);
        }
        else {
            if(s.find(x) != s.end())
                cout << "true" << endl;
            else
                cout << "false" << endl;
        }
    }
    return 0;
}
