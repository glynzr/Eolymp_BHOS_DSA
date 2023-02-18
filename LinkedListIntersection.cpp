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
Node* intersection(Node* node1,Node* node2){
    Node* pointer1=node1;
    Node* pointer2=node2;
    int len1=0,len2=0;

    while(pointer1!=NULL){
        len1++;
        pointer1=pointer1->next;
    }

    while(pointer2!=NULL){
        len2++;
        pointer2=pointer2->next;
    }
    pointer1=node1,pointer2=node2;
    if(len1>len2){
        for(int i=0;i<len1-len2;i++){
            node1=node1->next;
        }
    }else{

        for(int i=0;i<len2-len1;i++){
            node2=node2->next;
        }
    }
    while(node1!=node2){
        node1=node1->next;
        node2=node2->next;
    }
    return node1;
}
int main(){

}