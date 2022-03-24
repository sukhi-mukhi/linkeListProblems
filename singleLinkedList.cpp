#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};


int main()
{
    Node* head;
    Node* one=NULL;
    Node* two=NULL;
    Node* three=NULL;
    
    //allocate nodes
    one= new Node();
    two= new Node();
    three= new Node();
    //allocate data
	one->data=1;
    two->data=2;
    three->data=3;
	//allocate next node
    one->next=two;
    two->next=three;
    three->next=NULL;

    head=one;
    
    while(head!=NULL){
        cout<<head->data;
        head=head->next;
    }
}
