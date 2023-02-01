#include <bits/stdc++.h>
using namespace std;
//task 9557
long long  BinsAndBalls(int x,int y,int m){
    if(y==0) return 1;
    if(y%2==0){
        return BinsAndBalls((x*x)%m,y/2,m);
    }
    return (x*BinsAndBalls(x,y-1,m))%m;
}

int main(){
    int n;
    cin>>n;
    long long mod=pow(10,9)+7;
    int result=(n*BinsAndBalls(n-1,n-1,mod))%mod;
    cout<<result<<"\n";
    return 0;

}