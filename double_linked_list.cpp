#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;

};

void begin_insert(){
    int item;
    struct node *ptr, *head , *temp;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if(ptr == NULL){
        cout<<"OVERFLOW\n";
    }
    else{
        cout<<"Enter Value to be inserted : \n";
        cin>>item;
        if(head == NULL){
            ptr->next = NULL;
            ptr->prev = NULL;
            ptr->data = item;
            head = ptr;
        }
        else{
            ptr->next = head;
            ptr->prev = NULL;
            ptr->data = item;
            head = ptr;
        }
        cout<<"Node inserted!\n";
    }
}



int main()
{
    while (true)
    {
        int n;
        cout << "PRESS 1 TO INSERT NODE IN THE BEGINNING OF THE LINKED LIST : \n";
        cout << "Enter your Choice : ";
        cin >> n;
        switch (n)
        {
        case 1:
            begin_insert();
            // break;
            goto end_prog;  //jumps to the (end_prog) statement.
            

        default:
            cout << "You better watch out this time!\n";
            continue;
        }
    }
    end_prog :  //end_prog section of the code.
    cout<<"Program ended!";

    return 0;
}