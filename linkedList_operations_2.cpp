/***********************************
LINKED LIST
***********************************/

#include <iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
};

void insertAtTheBeginning(Node** headRef, int new_data){
    Node* new_Node = new Node;
    new_Node->next=*headRef;
    new_Node->data=new_data;
    
    *headRef=new_Node;
}

void insertAtTheEnd(Node** headRef, int new_data){
    Node* new_Node=new Node;
    new_Node->data=new_data;
    Node* last=*headRef;
    
    if(*headRef==NULL){
        *headRef=new_Node;
        return;
    }
    
    while(last->next!=NULL){
        last=last->next;
    }
    last->next=new_Node;
    return;
}
void insertAfter(Node* prev_node, int new_data){
   
   if(prev_node==NULL){
        cout<<"list is empty"<<endl;
        return;
    }
   
    Node* new_node=new Node;
    new_node->data=new_data;
    new_node->next=prev_node->next;
    prev_node->next=new_node;
    
    return;
}

void deleteNode(Node** headRef, int position){
    if(*headRef==NULL)return;
    Node* temp=*headRef;
    
    if(position==0){
        *headRef=temp->next;
        free(temp);
        return;
    }
    
    //find previous node to be deleted
    for(int i=0;temp!=NULL && i<position-1;i++){
        temp=temp->next;
    }
    
    // If position is more than number of nodes
    if (temp == NULL || temp->next == NULL)
        return;
    Node* next=temp->next->next;
    free(temp->next);
    temp->next=next;
}


int main()
{
    struct Node* head=NULL;
    
    insertAtTheBeginning(&head, 2);
    insertAtTheBeginning(&head, 1);
    insertAtTheEnd(&head,3);
    insertAfter(head->next,5);
    
    deleteNode(&head, 2);
    
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    
    return 0;
}
