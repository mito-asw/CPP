#include<iostream>
using namespace std;


int sum(int a , int b);   //Function Prototype
//int sum(int, int) This is acceptable

int main()
{

    int num1, num2;


    //num1 and num2 are actual parameters
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number : "<<endl;
    cin>>num2;
    cout<<"The sum of two numbers is : "<<sum(num1, num2);   //Function Calling




}



//Function Declaration

//formal parameters a and b will be taking values from actual parameters num1 and num2
int sum(int a , int b)
{
    int c = a + b ;
    return c;
}