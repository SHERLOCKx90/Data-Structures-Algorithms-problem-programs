#include <iostream>
using namespace std;

// creating the node structure:
struct node
{
    int data;
    struct node *next;
};

// declaring the node type variables:
struct node *ptr, *head, *temp;

// to insert the new node into the beginning of the linked list:
void begin_insert()
{
    struct node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        cout << "<!OVERFLOW!>\n";
    }
    else
    {
        cout << "Enter a value :";
        cin >> item;
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        cout << "\nNode is inserted in the head position of the list";
    }
};

// to insert the new node into the last of the linked list:
void last_insert()
{
    int item;
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        cout << "<!OVERFLOW!>\n";
    }
    else
    {
        cout << "Enter a value :";
        cin >> item;
        ptr->data = item;
        if (head == NULL)
        {
            cout << "The List is Empty.";
            ptr->next = NULL;
            head = ptr;
            cout << "\nNode is inserted! There is only 1 node in the list";
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            cout << "\nNode is inserted in the last position of the list";
        }
    }
};

// to randomly insert the new node into the linked list:
void random_insert()
{
    int item, pos;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        cout << "<!OVERFLOW!>\n";
    }
    else
    {
        cout << "Enter a value :";
        cin >> item;
        ptr->data = item;
        cout << "\nEnter the node->data after which the new node is to be inserted :\n";
        cin >> pos;
        temp = head;
        while (temp->data != pos)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                cout << "\nNode can't be inserted into the linked list.\n";
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
        cout << "\nNode is inserted in a random position of the list";
    }
};

void display_linked_list()
{
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        cout << "<!OVERFLOW!>\n";
    }
    else
    {
        if (head == NULL)
        {
            cout << "The List is Empty.";
        }
        else
        {
            temp = head;
            cout<<"Elements in the Linked list are :\n";
            while (temp !=  NULL)
            {
                temp = temp->next;
                cout<<temp->data<<"\n";
            }
            cout << "\nAll the Node values of the linked list are being displayed.";
        }
    }
}

// main : menu-driving code:
int main()
{
    int n;
    while (true)
    {
        cout << "\nChoose option: \n 1. begin insert  \n 2. last insert  \n 3. random insert \n 4. display linked list";
        cin >> n;
        switch (n)
        {
        case 1:
            begin_insert();
            break;
        case 2:
            last_insert();
            break;
        case 3:
            random_insert();
            break;
        
        case 4:
            display_linked_list();
            break;
        
        default:
            cout << "Err : Please enter a valid choice!";
            break;
        }
    }
    return 0;
}