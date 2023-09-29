#include<iostream>
using namespace std;

int c=10;  //global variable

int main()
{
    /*

//**************Built in data types**************

int a,b,c;  // c here is a local variable
cout<<"Enter the value of a: "<<endl;
cin>>a;
cout<<"Enter the value of b: "<<endl;
cin>>b;
c = a + b ;
cout<<"The sum of a and b is : "<<c<<endl;
cout<<"The global c is : "<<::c;         // To access the value of the global variable "c," we use scope resolution operator "::" with the "c" variable.

   */



/*

    // ************* Float, Double and Long double Literals *************

     float d = 31.4f;
     long double e = 34.4;

     //in C++ language, double is the default type given to a  decimal literal (34.4 is double by default and not float), so to use it as float, you have to specify it like "34.4F,"

     cout<<"The size if 34.4 is : "<< sizeof(34.4)<<endl;
     cout<<"The size if 34.4f is : "<< sizeof(34.4f)<<endl;
     cout<<"The size if 34.4F is : "<< sizeof(34.4F)<<endl;
     cout<<"The size if 34.l is : "<< sizeof(34.4l)<<endl;
     cout<<"The size if 34.4L is : "<< sizeof(34.4L)<<endl;

     //to display the size of float, double, and long double literals, we have used a "sizeof" operator.

 */


/*

    // ************* Reference Variables *************

 float x = 455;
 float &y = x;   //y is a reference to x , therefore it has the value of x in it
 cout<<x<<endl;
 cout<<y<<endl;

//Reference variables can be defined as another name for an already existing variable. These are also called an alias. For example, let us say we have a variable with the name of "sum", but we also want to use the same variable with the name of "add", to do that we will make a reference variable with the name of "add"

 */

    // ************* Type Casting *************


    //Typecasting can be defined as converting one data type into another.

    int a= 45;
    float b= 45;               //Here Implicit type casting occurs as the system automatically takes 45 as an integer
    float c = 45.46;

    //we have initialized variables, integer "a" , float b and float "c". After that, we converted an integer variable "a" into a float variable and float variable "c" into an integer variable. In C++, there are two ways to typecast a variable, either using "(float)a" or using "float(a)".

    cout<<"The value of a is : "<<(float)a<<endl;
    cout<<"The value of a is : "<<float(a)<<endl;

    cout<<"The value of c is : "<<(float)c<<endl;
    cout<<"The value of c is : "<<float(c)<<endl;

    int d = int(c);

    cout<<"The expression is : "<< a + c <<endl;
    cout<<"The expression is : "<< a + int(c) <<endl;
    cout<<"The expression is : "<< a + (int)c <<endl;


}
