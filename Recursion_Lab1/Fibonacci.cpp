#include <bits/stdc++.h>
using namespace std;
//task 4730
int main(){
    int n;
    cin>>n;
    vector <int> Fibo;
    Fibo.push_back(1);
    Fibo.push_back(1);
    if(n>=2){
        for(int i=2;i<n+1;i++){
            Fibo.push_back(Fibo[i-1]+Fibo[i-2]);
        }
    }
    cout<<Fibo[n];

}