#include <iostream>
using namespace std;

struct node // This statement declares a variable named node as type of pointer to struct node.
{
    int data;
    struct node *next;
};

struct node *head, *ptr;

void beginsert()
{
    struct node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node *)); // malloc() is a standard library function in C that allocates memory of size equal to the size of newnode structure in the heap region during runtime and returns a void pointer to that location.
    // The pointer returned by malloc() function is type-casted into pointer to struct node type and then assigned to newnode variable.

    // So in a nutshell, the given code snippet dynamically allocates memory of size enough to hold node structure and type cast it to pointer to node structure, then assigns to newnode variable.
    if (ptr == NULL)
    {
        cout << "\nOVERFLOW";
    }
    else
    {
        cout << "enter value: \n";
        cin >> item;
        ptr->data = item;
        ptr->next = head; // old link-> the head pointer pointed to the existing first node of the linked list.
        head = ptr;       // new link-> now the head pointer points to address of (ptr)- pointer.
        cout << "\nNode inserted!";
    }
}
void lastinsert()
{
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr == NULL)
    {
        cout << "OVERFLOW";
    }
    else
    {
        cout << "enter value:\n";
        cin >> item;
        ptr->data = item;
        if (head == NULL)
        {
            ptr->next = NULL;
            head = ptr;
            cout << "\nNode inserted";
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
            cout << "\nNode inserted!";
        }
    }
}

void randominsert()
{
    int i, loc, item;
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr == NULL)
    {
        cout << "OVERFLOW";
    }
    else
    {
        cout << "\nEnter element value:";
        cin >> item;
        ptr->data = item;
        cout << "\nEnter the location after which you want to insert";
        cin >> loc;
        temp = head;
        for (i = 0; i < loc; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                cout << "\ncan't insert\n";
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
        cout << "\nNode inserted!";
    }
}
void begin_delete()
{
    struct node *ptr;
    if (head == NULL)
    {
        printf("\nList is empty\n");
    }
    else
    {
        ptr = head;
        head = ptr->next;
        free(ptr); // The free() function in C++ deallocates a block of memory previously allocated using calloc, malloc or realloc functions, making it available for further allocations.
        printf("\nNode deleted from the begining ...\n");
    }
}
void last_delete()
{
    struct node *ptr, *ptr1;
    if (head == NULL)
    {
        printf("\nlist is empty");
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("\nOnly node of the list deleted ...\n");
    }

    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr1 = ptr;
            ptr = ptr->next;
        }
        ptr1->next = NULL;
        free(ptr);
        printf("\nDeleted Node from the last ...\n");
    }
}
void random_delete()
{
    struct node *ptr, *ptr1;
    int loc, i;
    printf("\n Enter the location of the node after which you want to perform deletion \n");
    scanf("%d", &loc);
    ptr = head;
    for (i = 0; i < loc; i++)
    {
        ptr1 = ptr;
        ptr = ptr->next;

        if (ptr == NULL)
        {
            printf("\nCan't delete");
            return;
        }
    }
    ptr1->next = ptr->next;
    free(ptr);
    printf("\nDeleted node %d ", loc + 1);
}
void search()
{
    struct node *ptr;
    int item, i = 0, flag;
    ptr = head;
    if (ptr == NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
        printf("\nEnter item which you want to search?\n");
        scanf("%d", &item);
        while (ptr != NULL)
        {
            if (ptr->data == item)
            {
                printf("item found at location %d ", i + 1);
                flag = 0;
            }
            else
            {
                flag = 1;
            }
            i++;
            ptr = ptr->next;
        }
        if (flag == 1)
        {
            printf("Item not found\n");
        }
    }
}

void display()
{
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        printf("Nothing to print");
    }
    else
    {
        printf("\nprinting values . . . . .\n");
        while (ptr != NULL)
        {
            printf("\n%d", ptr->data);
            ptr = ptr->next;
        }
    }
}

int main()
{
    int choice = 0;
    while (choice != 9)
    {
        cout << "\n\n************Main Menu************\n";
        cout << "\nChoose one option from the following list:\n";
        cout << "\n=====================================\n";
        cout << "\n1.INsert in beginning";
        cout << "\n2.INsert in last";
        cout << "\n3.INsert in random location";
        cout << "\n4.delete from the beginning";
        cout << "\n5.delete from the last";
        cout << "\n6.delete from any specified location";
        cout << "\n7.display all";
        cout << "\n8.search for an element";
        cout << "\n9.Exit";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            beginsert();
            break;

        case 2:
            lastinsert();
            break;

        case 3:
            randominsert();
            break;
        case 4:
            begin_delete();
            break;
        case 5:
            last_delete();
            break;
        case 6:
            random_delete();
            break;
        case 7:
            display();
            break;
        case 8:
            search();
            break;
        case 9:
            exit(0);
            break;

        default:
            cout << "Please enter a valid choice: ";
            break;
        }
    }
}