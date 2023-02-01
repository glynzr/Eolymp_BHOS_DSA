#include <bits/stdc++.h>
using namespace std;

//task 1616
int isPrime(int n){
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}


int main(){
    int number;
    cin>>number;
    if(isPrime(number)){
        cout<<"Yes\n";
    }else{
        cout<<"No\n";
    }

}



