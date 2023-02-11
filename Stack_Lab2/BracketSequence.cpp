#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isCorrect(const string& str) {
    stack<char> s;
    for (char c : str) {
        if (c == '(') {
            s.push(c);
        } else if (c == ')') {
            if (s.empty() || s.top() != '(') {
                return false;
            }
            s.pop();
        }
    }
    return s.empty();
}

int main() {
    string str;
    cin >> str;
    cout << (isCorrect(str) ? "YES" : "NO") << endl;
    return 0;
}