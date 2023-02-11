#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    stack<int> s;
    for (int i = 0; i < n; i++) {
        if (s.empty() || s.top() == a[i]) {
            s.push(a[i]);
        } else {
            s.pop();
        }
    }

    if (s.empty()) {
        cout << -1 << endl;
        return 0;
    }

    int majority = s.top();
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == majority) {
            count++;
        }
    }

    if (count > n / 2) {
        cout << majority << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}