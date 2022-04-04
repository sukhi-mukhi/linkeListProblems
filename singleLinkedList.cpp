/***********************************
LINKED LIST
***********************************/

#include <iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
};



int main()
{
    Node* head=NULL;
    Node* one = new Node;
    Node* two = new Node;
    Node* three = new Node;
    
    one->data=1;
    two->data=2;
    three->data=3;
    
    head=one;
    one->next=two;
    two->next=three;
    three->next=NULL;
    
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    
    return 0;
}
