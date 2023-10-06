#include <iostream>
using namespace std;


class Employee{

int  empId;
string empName;
static int count ;

public:
void setData(void){
    cout<<"Enter Employee ID: "<<endl;
    cin>>empId;
    cout<<"Enter Employee Name: "<<endl;
    cin>>empName;
    count++;
}

void getData(void){

    cout<<"ID: "<<empId<<endl;
    cout<<"Name: "<<empName<<endl;

}
    static void getCount(void){
        cout<<"Total Number of Employees : "<<count<<endl;
    }


};

//Count is the static data member of class Employee
int Employee::count; //Default value is 0


int main()
{
   Employee E1,E2,E3;

   E1.setData();
   E2.setData();
   E3.setData();

    E1.getData();
   // Employee::getCount();
    E2.getData();
   // Employee::getCount();
    E3.getData();
    Employee::getCount();



    return 0;
}
