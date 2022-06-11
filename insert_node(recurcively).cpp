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

Node* insertNode(Node *head, int i, int data) {
	// Write your code here
    //BASE CONDITION
    if(head==NULL) return head ;
    
    
    if(i==0 && head!=NULL)
    {
        Node * Newnode = new Node(data) ;
        Newnode->next = head ;
        return Newnode ;
    }
    
    head->next = insertNode(head->next, i-1 , data) ;
    return head ;
}