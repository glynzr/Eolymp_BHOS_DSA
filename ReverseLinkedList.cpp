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

void printReverse(Node* node){
    if (node==NULL) return;
    printReverse(node->next);
    cout<<node->value<<" ";
}
int main(){
  Node* head= new Node(1);
  Node* second= new Node(2);
  Node* third= new Node(3);
  head->next=second;
  second->next=third;
  printReverse(head);

}