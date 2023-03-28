#include<iostream>
#include<string>
using namespace std;

class Stack{
    private: //private data members /variables. -> PRIVATE ACCESS MODIFIER
        int top; //variable containing the value of the top element of the stack. //keeps track of the no.of entries into the stack.
        int arr[5]; //array of length 5 is declared.


    public: //PUBLIC ACCESS MODIFIER
        Stack(){ //constructor is always called when the stack is created for the first time as an object of the class Stack.
            top=-1; //when the array is created for the first time the array is completely empty. That's why the top value is -1 . -1 is the index pos. of any array and also of an empty array.
            for (int i = 0; i < 5; i++) //Initially we assign all the entries to be 0 , when the stack is first created as an object.
            {
                arr[i]=0;
            }
        }

        bool isEmpty(){ //checks if the stack is empty or not
            if(top==-1){
                return true;
            }
            else{
                return false;
            }
        }
};
int main(){
    return 0;
}