//GFG Logic
int getNthFromLast(Node *head, int n)
{
       // Your code here
    Node* curr=head;
    int cnt=0;
    while(curr!=NULL){
        curr=curr->next;
        cnt++;
    }
    
     if(n>cnt) return -1;
    
    int num=(cnt-n)+1;
    
    int i=1;
    curr=head;
    
    while(i<num){
      curr=curr->next;
      i++;
    }
  return curr->data;
}
