#include <iostream>
#include <stack>
#include <unordered_map>

using namespace std;

class MaxFreqStack {
    stack<int> st;
    unordered_map<int, int> freq;
    unordered_map<int, stack<int>> group;
    int max_freq = 0;

public:
    void push(int x) {
        max_freq = max(max_freq, ++freq[x]);
        group[freq[x]].push(x);
        st.push(x);
    }

    int pop() {
        int x = group[max_freq].top();
        group[max_freq].pop();
        if (group[freq[x]--].empty()) {
            max_freq--;
        }
        st.pop();
        return x;
    }
};

int main() {
    MaxFreqStack s;

    string cmd;
    while (cin >> cmd) {
        if (cmd == "push") {
            int n;
            cin >> n;
            s.push(n);
        } else if (cmd == "pop") {
            cout << s.pop() << endl;
        }
    }

    return 0;
}