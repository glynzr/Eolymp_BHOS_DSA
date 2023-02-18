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
Node *detectCycle(Node *node) {
    Node *slow = node;
    Node *fast = node;
    
    // Step 1: find a meeting point
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            break;
        }
    }
    
    if (fast == NULL || fast->next == NULL) {
        return NULL; // no cycle
    }
    
    // Step 2: find the starting point of the cycle
    slow = node;
    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }
    
    return slow;
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

}
