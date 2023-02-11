#include <bits/stdc++.h>
using namespace std;
stack <int> S,minStack;
void push(int x){
    S.push(x);
    if(minStack.empty() || x<=minStack.top()){
        minStack.push(x);
    }
}

void pop(){
    if(S.top()==minStack.top()){
        minStack.pop();
    }
    S.pop();
}
int getMin(){
    return minStack.top();
}
int main(){
    int operation;
    cin>>operation;
    for(int i=0;i<operation;i++){
        int command;
        cin>>command;
        if(command==1){
                int element;
                cin>>element;
                push(element);
        }else if(command==2){
            pop();
        }else{
            cout<<getMin();
        }
    }
}