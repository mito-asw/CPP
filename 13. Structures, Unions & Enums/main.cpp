#include <iostream>
using namespace std;


//The structure is a user-defined data type that is available in C++.
//Structures are used to combine different types of data types, just like an array is used to combine the same type of data types.


struct employee
{
    int id;
    string Name;
    float Salary;
};


typedef struct employees
{
    int id;
    string Name;
    float Salary;
} employ;


//Unions are similar to structures but they provide better memory management then structures.
// Unions use shared memory so only 1 variable can be used at a time.

union student                //It can be uses as a perfect example as a student can be called using his name roll number or his phonenumber in database
{
    int RollNo;
    char Name;
    int Phone;
};



    enum Week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};



int main()
{

  struct employee Emp1;
  Emp1.id = 34214341;
  Emp1.Name = "Adesh";
  Emp1.Salary = 2131.4324;

  cout<<"Employee DataBase"<<endl<<endl;

  cout<<"ID : "<<Emp1.id<<endl;
  cout<<"Name : "<<Emp1.Name<<endl;
  cout<<"Salary : "<<Emp1.Salary<<endl;

  cout<<endl;

  employ Emp2;
  Emp2.id = 542354235;
  Emp2.Name = "Pulse";
  Emp2.Salary = 461.4324;

  cout<<"Employee DataBase using Typedef"<<endl<<endl;

  cout<<"ID : "<<Emp2.id<<endl;
  cout<<"Name : "<<Emp2.Name<<endl;
  cout<<"Salary : "<<Emp2.Salary<<endl;

    cout<<endl;

//Union

 union student S ;
 S.RollNo = 12;
 S.Name='A';
 cout<<"The student with roll no : "<<S.RollNo;   // This will not give value 12 as it will be overwritten by s.name and give a garbage value

    cout<<endl;


//Enum
   // Enums are user-defined types which consist of named constants.
   // Enums are used to make the program more readable.
    enum Week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
    Week Day1 = Monday;
    cout<<(Monday==1)<<endl;
    cout<<Sunday<<endl;
//This returns 0 and 1 as true or false


}