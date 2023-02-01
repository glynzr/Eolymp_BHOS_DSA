#include <bits/stdc++.h>
using namespace std;
int ModularExponentiation(int x,int n ,int m){
    if(x==0) return 0;
    if(n==0) return 1;
    long y;
    if(n%2==0){
        y=ModularExponentiation(x,n/2,m);
        y=(y*y)%m;
    }else{
        y=x%m;
        y=(y*ModularExponentiation(x,n-1,m)%m)%m;
    }
    return (int) ((y+m)%m);
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<ModularExponentiation(a,b,c);

}