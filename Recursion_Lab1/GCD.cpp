#include <bits/stdc++.h>
using namespace std;
int GCD(int x,int y){
    if(x==0) return y;
    if(y==0) return x;
    if(x<=y){
        return GCD(x,y%x);
    }else{
        return GCD(x%y,y);
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<GCD(a,b);

}