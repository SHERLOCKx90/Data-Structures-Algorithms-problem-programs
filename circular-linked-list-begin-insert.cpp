#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void begin_insert()
{
    int item;
    struct node *ptr, *head, *temp;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr == NULL) //memory is not allocated to the pointer variable ptr, of the size of the node structure.
    {
        cout << "OVERFLOW\n";
    }
    else
    {
        cout << "Enter a value : \n";
        cin >> item;
        ptr->data = item;
        if (head == NULL)
        { // making ptr node the first node in the linked list if the list is empty from the beginning.

            
            ptr->next = head; // circulates and links to the head pointer variable i.e the first node of the linked list.
            head = ptr;
        }
        else
        { // eunning a loop until the temp->next == head;
            
            temp = head;  
            while(temp->next != head){
                temp = temp->next;
            } 
                  
            ptr->next = head;   
            temp -> next = ptr;   
            head = ptr;  
        }
    }
}

// main-section
int main()
{
    int n;
    cout<<"PRESS 1 TO INSERT NODE INTO THE CIRCULAR LINKED LIST :";
    cout<<"\n";
    cin>>n;
    

    switch (n)
    {
    case 1:
        begin_insert();
        break;
    
    default:
        break;
    }
    return 0;
}