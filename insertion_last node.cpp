#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *ptr, *head;

void last_insert(int item)
{
    struct node *ptr,*temp;
    int data;
    ptr = (struct node *)malloc(sizeof(struct node *)); // malloc() is a standard library function in C that allocates memory of size equal to the size of newnode structure in the heap region during runtime and returns a void pointer to that location.
    // The pointer returned by malloc() function is type-casted into pointer to struct node type and then assigned to newnode variable.

    // So in a nutshell, the given code snippet dynamically allocates memory of size enough to hold node structure and type cast it to pointer to node structure, then assigns to newnode variable.
    if (ptr == NULL)
    {
        cout << "\nOVERFLOW";
    }
    else
    {
        data = item;
        ptr->data = data; //new node data is inserted -> item inserted.
        if(head == NULL){
            ptr->next = NULL;
            head = ptr;
            cout<<"\nNode inserted!";
        }
        else{
            temp = head; //analogous to i=0 //initialization of temp node - pointer variable.
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next  = NULL; //here we just assign the new node as the last node of the linked list , by making the link part of the new node as NULL. We have already inserted the data into the data part of the node pointer variable ->ptr;
            cout<<"\nNode inserted!";
            
        }
    }
}

int main(){
    int choice,item;
    do //runs the loop atleast 1 time, then gives choice to the user if they want to run more , then they need to press '0'.
    {
        cout<<"\nEnter the item which you want to insert?";
        cin>>item;
        last_insert(item);
        cout<<"\n\nPress 0 to insert more?\n";
        cin>>choice;
    } while (choice == 0);
    
}