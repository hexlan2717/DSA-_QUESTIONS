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
int lengthtemp(Node *temp)
{
    //Base Case
   if( temp == NULL ) return 0 ;
    
   return (1 + lengthtemp(temp->next)) ; 
}



int length(Node *head) {
    // Write your code here
    return lengthtemp(head) ;
    
}