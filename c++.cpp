// FULL C++ concepts REVISION CODE: user can revise the concepts of C++ thoroughly from the code given below:
// ~SHERLOCK -> @CodeWithHarry : C++ in One Video  

#include<iostream>
#include<string>
using namespace std;
//user-defined function creation

// f(x)=x^2+2
int sum(int a, int b){ //declaring the return type of a function
    int c; //function->local variable  is defined.
    c=a+b; //c stores the added value of a and b
    return c; //c variable is returned.
}

class Employee{ //Base-class declaration
        public: //can be accessed from anywhere.
            string name;
            int salary;

            // CONSTRUCTORS: If we want that, when an object is created , a function runs, then we create constructors.
            Employee(string n, int s,int sp){ //constructor declaration //constructor acts just as a function , helps in instantiation of the object.
                this->name = n; //assigning user specified name(in the variable n) to the class state name
                this->salary = s;//assigning user specified salary(in the variable s)to the class state salary.
                this->secretPassword = sp; 
                // cout<<secretPassword;               
            }
            
            void printDetails(){ //to get/display all the details of the Employee.
                cout<<"the name of our first employee is "<<this->name<<" and his salary is "<<this->salary<<" dollars."<<"\n";
                //this -- keyword to access the object of the class, which is required by the member function of the same class. Syntax: (this->)
            }
            void getsecretPassword(){  //to get/display the secretPassword of the employee. 
                cout<<"the secret password of the employee is:"<<this->secretPassword<<"\n";
            } //the public methods can access the private states of the class.
        private:
            int secretPassword; //camelCase
 
     
};

// INHERITANCE: Child class inherited from the parent class.
class Programmer: public Employee{ //Child class declaration // inherited from the Employee parent class. //public part of the base class is inherited from the parent class.
    public:
    int errors;
};

int main() //main section
{
    // int a,b,c; //variable declaration
    // short as=9; // "as" is a valid identifier.
    // cout<<as<<"\n";
    // // camelcase notation

    // cout<<"enter 1st number:\n"; //print statement.
    // cin>>a; //scanning statement.
    // cout<<"enter 2nd number:\n";
    // cin>>b;
    // cout<<"enter 3rd number:\n";
    // cin>>c;
    // cout<<"all the numbers are inserted!"<<endl;
    // cout<<a<<"\n";
    // cout<<b<<"\n";
    // cout<<c<<"\n";
    // short x;
    // int z;
    // long y;
    // long long e;
    // // float score=45.32;
    // // score = 50; //so here the score variable can be redeclared and redefined.
    // float const score = 60;
    // // int score = 70;
    // double score2=45.3212;
    // long double score3=45.321;
    // cout<<score2<<"\n";
    // cout<<score2<<"\n";
    // cout<<score3    <<"\n";
    // cout<<score<<"\n";

    // int age;
    // cout<<"enter your age:\n";
    // cin>>age; //user input keyword: cin
    // // cout<<age<<"\n";
    // if(age>=100){ //if , else-if , else conditional statements.
    //     cout<<"invalid age\n";
    // } //checks if the age is above 100  or not
    // else if(age>=18){
    //     cout<<"you can vote!\n";
    // } //now checks the age , if it is greater than 18 or not. 
    // // Now if the age is greater than 18 and also greater than 100 that is why (>=100) is checked first before checking (>=18).
    // else{
    //     cout<<"you cannot vote!\n";
    
    // } //default option : if the user does'nt fall into that group than the user is not allowed to vote.
    // int mathsInMaths = 83;

    // if(mathsInMaths> 100 || mathsInMaths<0){
    //     cout<<"invalid marks\n";
    // }
    // else if(mathsInMaths>90){
    //     cout<<"you have got S grade!\n";
    // }
    // else if(mathsInMaths>70){
    //     cout<<"you have got A grade!\n";
    // }
    // else if(mathsInMaths>50){
    //     cout<<"you have got B grade!\n";
    // }
    // else{
    //     cout<<"below class average: grade: E\n";
    // }
    // int PhyMarks;
    // cout<<"enter your phy marks:\n";
    // cin>> PhyMarks;
    // switch (PhyMarks) //switches between specified cases.
    // {
    // case(50):
    //     cout<<"class average passed\n";
    //     break; //break takes the cursor  outside of the loop.
    // case (70):
    //     cout<<"grade B\n";
    //     break;
    // case (90):
    //     cout<<"grade S\n";
    //     break;
    
    // default:
    //     cout<<"not passed in Physics";
    //     break; //break may not be required in the default case, as it is the final case.
    // }
    // cout<<mathsInMaths<<"\n";
    // cout<<"hello world!"<< "hello sherlock!"<< "\"subhadeep chell\""<< 8+2 ;

    //while-loop
    // int index=34;
    // while (index<35) //while index is less than 35 , run the loop.
    // {
    //     cout<<"we are at index number:"<<index<<"\n";
    //     index+=1;
    // }

    //do-while loop
    // do{ //in do-while loop the loop runs atleast 1 time. 
    //     cout<<"we are at index number:"<<index<<"\n";
    //     index-=1;
    // }while (index>0);
    
    //for-loop
    // for (int i = 0; i < 35; i++) //initializes a variable i , checks the given condition, increments the value of i (default increment is +1)
    // {
    //     cout<<"the value of i is:"<<i<<"\n";
    // }

    //functions

    // int a,b;
    // cout<<"enter the first number:"<<"\n";
    // cin>>a;

    // cout<<"enter second number:"<<"\n";
    // cin>>b;
    // cout<<"the function returned :"<<sum(a,b);

    //1-DIMENSIONAL array.


    // int arr[]={1,3,6}; //array with size of 3 integers.
// array index  0 1 2
    // cout<<arr[0];
    // int marks[6]; 
    // for (int i = 0; i < 6; i++)
    // {
    //     cout<<"enter the marks of:"<<i<<"\n";
    //     cin>>marks[i];
    // }
    // for (int i = 0; i < 6; i++)
    // {
    //     cout<<"Marks of"<<i<<"th student is"<<marks[i]<<"\n";
    //     // cin>>marks[i];
    // }

    //2-DIMENSIONAL array

    // int arr2d[2][3]={ //2-D array is declared here. the first parameter given is row and the second parameter given is column.
    //     {1,2,3}, //1strow //accessible as a matrix
    //     {4,5,6} //2ndrow //accessible as a matrix
    // };
    // for (int i = 0; i < 2; i++) //i traverses row
    // {
    //     for (int j = 0; j < 3; j++) //j traverses column
    //     {
    //         cout<<"the value at "<<i<<","<<j<<"is"<<arr2d[i][j]<<"\n"; //displays the array elements 
    //     }
        
    // }

    //TYPE-CASTING

    // int a=343;
    // float b=87.34;
    // cout<<(float) a/34<<"\n";
    // cout<<(int) b;
    
    // STRINGS

    // string name="Harry";
    // cout<<"the name is "<<name<<"\n";
    // cout<<"the length name is "<<name.length()<<"\n";
    // cout<<"the sub name is "<<name.substr(2,3)<<"\n"; //here the first parameter of the substr() function is the character index and the second parameter is the no. of characters starting from the specified index position , to be accessed.
    // // cout<<"the name is "<<name<<"\n";

    //POINTERS : stores the address of a variable.
    // float a=34.234; //Declaration of variable whose address is to be stored.
    // float* ptra; //pointer declaration.
    // ptra = &a; //storing the address of a in ptra.

    // // (*ptra)=(a)=34; //both gives the value of the variable.
    // // (ptra)=(&a)=address of 'a'; //both gives the adress of the variable.
    // // * -> de-referencing operator.->(value at that point)
    // cout<<"the address:"<<ptra<<"\n";
    // cout<<"the value:"<<*ptra<<"\n";
    // cout<<"the address:"<<&a<<"\n";
    // cout<<"the value:"<<a<<"\n";

    //CLASSES AND OBJECTS:
    
    Employee har("Harry constructor", 344,236346); //object declaration //new object with given values run the (Employee) constructor, which assigns the corresponding variable values ->(name , salary)inside the constructor.
    // har.name="harry"; //class variable-> name assessment
    // har.salary=100; //class variable->salary assessment
    // cout<<"the name of our first employee is "<<har.name<<" and his salary is "<<har.salary<<" dollars."<<"\n";
    har.printDetails(); //calls the printDetails() public member function of the class.
    har.getsecretPassword(); //calls the getsecretPassword() public member function of the class.
    
    return 0; //returns 0 if the program has no error.
}