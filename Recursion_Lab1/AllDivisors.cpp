#include <bits/stdc++.h>
using namespace std;
//task 8669
void Divisors(int x){
    for(int i=1;i<sqrt(x);i++){
        if(x%i==0){
            cout<<i<<" ";

        }
    }
    for(int i=sqrt(x);i>0;i--){
        if(x%i==0){
            cout<<x/i<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    Divisors(n);

}