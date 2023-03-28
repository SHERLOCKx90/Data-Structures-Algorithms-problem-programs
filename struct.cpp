#include<iostream>
using namespace std;

struct employee
{
    string name;
    int salary;
    int reg_no;

};

int main()
{
    struct employee e1; //e1  object of the employee struct is created. 

    // cout<<"the employee details is as follows:\n";

    cout<<"enter the employee name:\n"; //user inputs the emplpoyee name.
    cin>>e1.name; //the user input name is stored in the name variable of the struct.
    
    cout<<"enter the employeee salary:\n";
    cin>>e1.salary; //the user input salary is stored in the name variable of the struct.
    
    
    cout<<"enter the employeee registration number:\n";
    cin>>e1.reg_no; //the user input reg_no. is stored in the name variable of the struct.
    
    cout<<"the employee details are:\n"; //displaying all the struct variable data.-> employee details.
    cout<<"name: "<<e1.name<<"\n";
    cout<<"reg.no: "<<e1.reg_no<<"\n";
    cout<<"salary: "<<e1.salary<<"\n";
    

    
    
    
 return 0;
}