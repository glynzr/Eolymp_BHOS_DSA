#include <bits/stdc++.h>
using namespace std;
int FunFunction(int n,int m){
    if(n<=0 || m<=0) return 0;
    if(n<=m){
        return FunFunction(n-1,m-2)+FunFunction(n-2,m-1)+2;
    }else{
        if(m%2==0){
            return m/2;
        }else{
            return m/2+1;
        }

    }
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<FunFunction(x,y);

}