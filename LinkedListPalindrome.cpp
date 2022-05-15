//GFG logic
bool isPalindrome(Node *head)
    {
        vector<int> v1;
        vector<int> v2;
        
        Node* curr=head;
        while(curr!=NULL){
            v1.push_back(curr->data);
            curr=curr->next;
        }
        
        //reverse the list
        Node *current,*prev,*next;
        current=head;
        prev=NULL;
        while(current!=NULL){
          next=current->next;
          current->next=prev;
          prev=current;
          current=next;
        }
        
        head=prev;
        
         while(head!=NULL){
            v2.push_back(head->data);
            head=head->next;
        }
        
        if(v1==v2)return true;
        return false;
        
    }
