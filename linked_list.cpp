#include<iostream>
using namespace std;
struct node //here we create a node 
{
    int data; //declaration of the data inside each node.
    node *next; //declaration of the pointer of each node.
}*first=NULL; //intially the head pointer of the type (node) is set to NULL as no node exists
// typedef struct node node;
int main()
{
    
    node *t,*last; //declaring the node pointers of the node in the main memory
    first=new node; //creating the first node.
    first->data=0; //set the data value of the first node to 0
    first->next=NULL; //as there are no other elements , the next value of the first node points to NULL.
    last=first; //as no other nodes are present , the last node is same as the first node.

    for(int i=1;i<100;i++) //loop for creating the nodes
    {
        t=new node; //creation of the new node, each time the loop runs.
        t->data=i; //setting the data of each node to i , to contain the i values each time the loop runs.
        t->next=NULL; //now , each time when a node is created , the node next value points to NULL.
        last->next=t; //now the last pointer points to t node.
        last=t; //now we traverse the last pointer to the t node, so the t node now becomes the last node, that's why dynamic allocation occurrs in linked lists.
    }

    node *q; //now to display each node , we take a new pointer of the node type.
    q=first; //initially, the q has been assigned to first node.
     //untill the node's next value will be NULL(i.e the last node), the loop will run.
    cout<<q->data<<" ";
    do{
        // cout<<q->data<<"\n";
        q=q->next;
        cout<<q->data<<" ";
         
        
        
    }while(q->next!=NULL);
}