/******************************************************************************
LINKED LIST OPERATIONS
*******************************************************************************/
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

//INSERT AT THE END OF THE LIST
void InsertAtEnd(Node** head_ref, int new_data){
    
    Node* new_node=new Node;
    Node* last=*head_ref;
    
    new_node->data=new_data;
    new_node->next=NULL;
    
    if(*head_ref==NULL){
        *head_ref=new_node;
        return;
    }
    while(last->next!=NULL){
        last=last->next;
    }
    last->next=new_node;
    return;
}

//INSERT AT THE BEGINNING OF THE LIST
void InsertAtBegin(Node** head_ref, int new_data){
    Node* new_node=new Node;
    new_node->data=new_data;
    
    new_node->next=*head_ref;
    *head_ref=new_node;
}

void printList(Node* node) {
  while (node != NULL) {
  cout << node->data<<" ";
  node = node->next;
  }
}


int main(){
    
    Node* head=NULL;
    InsertAtEnd(&head, 2);
    InsertAtBegin(&head,1);
    
    printList(head);
    return 0;
}
