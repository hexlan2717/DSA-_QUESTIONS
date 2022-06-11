
void printIthNode(Node *head, int i)
{
    //Base condition
if(head==NULL) return ;
    
int count = 0 ;
    
    Node* temp = head ;
    
    while(temp!=NULL)
    {
        if(i == count)
        {
            if(temp->data != -1) cout <<  temp->data ;
            temp=temp->next ;
            return ;
        }
        else{
            temp=temp->next ;
            count++ ;
        }
    }
    
    
    
    
    
    
    
}