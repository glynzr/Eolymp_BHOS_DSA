#include <bits/stdc++.h>
using namespace std;
class Node{
    public:

    int value;
    Node* next;
    Node(int x){
        value=x;
        next=NULL;

    }
    Node(){}
};

int sum(Node* node){
    int sum=0;
    while(node!=NULL){
        sum+=node->value;
        node=node->next;
    }
    return sum;
}

int main(){
    Node* head=new Node(1);
    Node* second=new Node(2);
    Node* third= new Node(3);
    head->next=second;
    second->next=third;
    cout<<sum(head)<<"\n";
    
}