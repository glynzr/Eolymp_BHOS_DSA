#include <bits/stdc++.h>
using namespace std;

int main()
{
 stack<pair<int, int> > S;

 int s,n;
 cin >> n;
 for (int i = 0;i < n;i++) {
  cin >> s;
  while (!S.empty()) {
   if (S.top().first <= s) {
    S.pop();
   }
   else {
    break;
   }
  }
  if (S.empty()) {
   S.push(make_pair(s, i));
   cout << "-1 ";
  }
  else {
   cout << S.top().second << " ";
   S.push(make_pair(s, i));
  }
 }
  

 return 0;
}