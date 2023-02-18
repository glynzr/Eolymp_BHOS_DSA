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

Node* merge(Node* node1, Node* node2){
    Node* temp = new Node(-1);
    Node* newNode=temp;
    while(true){
        if(node1==NULL){
            newNode->next=node2;
            break;
        }
        if(node2==NULL){
            newNode->next=node1;
            break;
        }
        if(node1->value<node2->value){
            newNode->next=node1;
            node1=node1->next;
        }else{
            newNode->next=node2;
            node2=node2->next;
        }
        newNode=newNode->next;
    }
    return temp->next;
}
int main(){

}
