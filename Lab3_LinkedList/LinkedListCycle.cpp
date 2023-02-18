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
int hasCycle(Node* node){
    if(node==NULL) return 0;
    Node* fast=node;
    Node* slow=node;
    while(fast->next && fast->next->next){
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast) return 1;
    }
    return 0;
}
int main(){
    Node* head= new Node(1);
    Node* second= new Node(2);
    Node* third= new Node(3);
    Node* four= new Node(4);
    Node* five= new Node(5);
    head->next=second;
    second->next=third;
    third->next=four;
    four->next=five;
    cout<<hasCycle(head);

}
