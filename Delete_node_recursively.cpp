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

Node *deleteNodeRec(Node *head, int pos) {
	//Write your code here
    if(head==NULL) return head ;
    
    
    if(head!=NULL && pos==0 ) 
    {
        head = head-> next ;
        return head ;
    }
    
    head->next = deleteNodeRec(head->next,pos-1) ;
    return head ;
    
}