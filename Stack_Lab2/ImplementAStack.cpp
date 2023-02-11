#include <iostream>
#include <stack>
using namespace std;
//task 5087
int main(){
    int n;
    cin>>n;
    int i=0;
    stack <int> S;
    while(i<n){
        int x;//operation number
        cin>>x;
        if(x==1){
            int number;
            cin>>number;
            S.push(number);

        }else{
            cout<<S.top()<<"\n";
            S.pop();
        }
        i++;
    }
}