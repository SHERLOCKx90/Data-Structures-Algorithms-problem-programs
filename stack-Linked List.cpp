// Menu driven code to create a Stack via Linked list implementation.


#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *ptr, *head, *temp;

void push()
{
    int item;
    struct node *ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr == NULL)
    {
        cout << "Memory not allocated! Unable to print \n ";
    }
    else
    {
        cout << "Enter data value : ";
        cin >> item;
        if (head == NULL)
        {
            cout << "As the Stack is empty, we are pushing the element into the top of the stack : No.of elements in the stack : 1 \n";
            ptr->data = item;
            head = ptr;
            ptr->next = NULL;
            cout << "Element is pushed into the stack! \n";
        }
        else
        {
            ptr->data = item;
            ptr->next = head;
            head = ptr;
            cout << "Element is pushed into the top of the stack! \n";
        }
    }
};

void pop()
{
    int item;
    struct node *ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr == NULL)
    {
        cout << "The Stack is not created only. \n";
    }
    else
    {
        if (head == NULL)
        {
            cout << "The Stack is already empty! \n";
        }
        else
        {
            ptr = head;
            item = ptr->data;
            head = head->next;
            free(ptr);
            cout << "Element with the data value as :" << item << " removed \n";
        }
    }
};

void peek()
{
    if (head == NULL)
    {
        cout << "The Stack is already empty!\n";
    }
    else{
        temp = head;
        while (temp!=NULL)
        {
            cout<<"Element is : "<<temp->data<<"\n";
            temp= temp->next;
        }
        
    }
};

int main()
{
    int choice;
    cout << "Enter your choice ...which operation to perform : \n 1. PUSH  \n  2. POP  \n  1. PEEK \n";
    cin >> choice;
    while (true)
    {
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            exit;
            break;

        default:
            cout << "Warning  : Please enter a valid choice!";
            break;
        }
    }

    return 0;
}