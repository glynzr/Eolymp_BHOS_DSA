#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isCorrect(const string& str) {
    stack<char> s;
    for (char c : str) {
        if (c == '(' || c == '[') {
            s.push(c);
        } else if (c == ')' || c == ']') {
            if (s.empty()) {
                return false;
            }
            char top = s.top();
            if ((c == ')' && top == '(') || (c == ']' && top == '[')) {
                s.pop();
            } else {
                return false;
            }
        }
    }
    return s.empty();
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); // ignore the newline character
    while (n--) {
        string str;
        getline(cin, str);
        cout << (isCorrect(str) ? "Yes" : "No") << endl;
    }
    return 0;
}