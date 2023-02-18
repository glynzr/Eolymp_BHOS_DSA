#include <bits/stdc++.h>
using namespace std;
int main(){
    deque <int> S;
    int n;
    cin>>n;
    int command,number;
    for(int i=0;i<n;i++){
        cin>>command;
        if(command==1 || command==2){
            cin>>number;
            if(command==1){
                S.push_front(number);
            }else{
                S.push_back(number);
            }
        }else{
            if(command==3){
                cout<<S.front()<<"\n";
                S.pop_front();
            }else if(command==4){
                cout<<S.back()<<"\n";
                S.pop_back();
            }
        }
    }
}
