#include<iostream>
#include <iomanip>
using namespace std;

int main()
{

    /*

    ***************Constants****************

     Constants are unchangeable; when a constant variable is initialized in a program, its value cannot be changed afterwards

     int a = 3;
     const int b = 3;      //This variable is declared as a constant

     cout<<"The value of a : "<<a<<endl;
     cout<<"The value of b :"<<b<<endl;

     a = 5;  //here value of a is changed and now after printing a again it will change to 5 from 4
     //b = 5;  // Here as b is declared constant the value will not change and the progeam will give you an error

     return 0;

*/

    /*

    ***************Manipulators****************



    In C++ programming, language manipulators are used in the formatting of output. The two most commonly used manipulators are: "endl" and "setw".

    "endl" is used for the next line.
    "setw" is used to specify the width of the output.


    int a = 3, b = 78, c = 12333;

    cout<<"The value of a without setw is : "<<a<<endl;
    cout<<"The value of b without setw is : "<<b<<endl;
    cout<<"The value of c without setw is : "<<c<<endl;

    cout<<"The value of a without setw is : "<<setw(4)<<a<<endl;
    cout<<"The value of b without setw is : "<<setw(4)<<b<<endl;
    cout<<"The value of c without setw is : "<<setw(4)<<c<<endl;

return 0;

*/

    /*

    ***************Operator Precedence & Operator Associativity****************

     Operator precedence helps us to solve an expression. For example, in an expression "int c = a*b+c" the multiplication operator's precedence is higher than the precedence of addition operator, so the multiplication between "a & b" first and then addition will be performed.

     Operator associativity helps us to solve an expression; when two or more operators have the same precedence, the operator associativity helps us to decide that we should solve the expression from "left-to-right" or from "right-to-left".


     */

    int a = 3, b = 4;
    int c = (a*5)+b;  // this is operator precedence of a * 5 +b
    int d = ((((a * 5)+b)-45)+87); // this os operator precedence of a * 5 + b - 45 + 87
    cout<<c<<endl<<d<<endl;
return 0;

}