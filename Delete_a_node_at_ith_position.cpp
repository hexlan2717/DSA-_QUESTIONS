/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node *deleteNode(Node *head, int pos)
{
    //BASE CASE
    if(head==NULL) return head ;
    
    //TO DELETE THE HEAD
    if( pos == 0 )
    {
        Node* to_delete = head ;
        head = head -> next ;
        delete to_delete ;
    }
    else{//TO DELETE IN THE MIDDLE AND THE LAST
        int count =1 ;
        Node* temp=head->next;
        Node* prev=head;
        while(temp!=NULL)
        {
          if(count == pos)
          {
              if(temp->data!=-1)
              {
                  prev->next = temp->next ;
                  delete temp ;
                  break ;
              }
              else{
                  break ;
              }
          }
        else{
           prev=prev->next;
            temp=  temp->next ;
            ++count;
        }
       }
    }
    
    
    
    
    return head ;
}































