#include <bits/stdc++.h>
using namespace std;
int main(){
    stack <int> S;
    string command;
    while(cin>>command){
        if(command=="push"){
            int x;
            cin>>x;
            S.push(x);
            cout<<"ok"<<endl;
        }
        else if(command=="pop"){
            cout<<S.top()<<endl;
            S.pop();
        }
        else if(command=="back"){
            cout<<S.top()<<endl;
        }
        else if(command=="size"){
            cout<<S.size()<<endl;
        }
        else if(command=="clear"){
            while(!S.empty()){
                S.pop();
            }
            cout<<"ok\n";
        }
        else if(command=="exit"){
            cout<<"bye"<<endl;
            break;
        }
    }
}