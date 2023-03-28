#include <iostream>
using namespace std;
// creating a node of the type struct containing the data item and the address link to the next node.
struct node
{
    int data;
    struct node *next;
};

void begin_insert() //inserting node at the beginning of the linked list.
{
    int item;
    // declaring the different required pointer vairables of the type struct node.
    struct node *ptr;
    struct node *head, *temp, *ptr1;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr == NULL)
    {
        cout << "OVERFLOW\n";
    }
    else
    {
        cout << "Enter value: \n";
        cin >> item;
        ptr->data = item;
        ptr->next = head; // placing the ptr node infront of the head node...that's why now the ptr node gets linked to the head node.
        head = ptr;
        cout << "Node inserted.\n";
    }
}

int main()
{
    int n;
    cout << "Press 1 to insert node in the beginning of the linked list :\n";
    while (true)
    {
        string s;
        cout << "YOUR CHOICE (1/0) : \n";
        cin >> n;
        switch (n)
        {
        case 1:
            begin_insert();
            cout << "Do want to enter anymore nodes in the linked list ? (YES / NO)";
            cin >> s;
            if (s == "yes")
            {
                continue;
            }
            else if (s == "no")
            {
                exit;
                break;
            }
            break;

        default:
            cout << "PLEASE PRESS 1 TO INSERT NODE:\n";
            break;
        };
    }
    return 0;
}