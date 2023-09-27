#include <iostream> // This is a system header file
//#include"this.h"This is a user defined header file. If an error occurs this means this file is not available in the current directory
using namespace std;

int main() {

    int a = 3, b=5;
 cout<<"Operators in c++"<<endl;
    cout<<""<<endl;

 //Arithmetic Operators
    cout<<"Following are the Arithmetic Operators"<<endl;
    cout<<"The value of a + b is: "<<a+b<<endl;
    cout<<"The value of a - b is :"<<a-b<<endl;
    cout<<"The value of a * b is :"<<a*b<<endl;
    cout<<"The value of a / b is :"<<a/b<<endl;
    cout<<"The value of a % b is :"<<a%b<<endl;
    cout<<"The value of a++  is :"<<a++<<endl;
    cout<<"The value of a-- is :"<<a--<<endl;
    cout<<"The value of ++a is :"<<++a<<endl;
    cout<<"The value of --a is :"<<--a<<endl;
    cout<<""<<endl;
    cout<<""<<endl;

    //Assignment Operator --> Used to assign values to variables
    //int a = 3,, b = 9;
    //char d='d';

    //Comparison Operators
    cout<<"Following are the Comparison Operators"<<endl;
    cout<<"The value of a == b is :"<<(a==b)<<endl;
    cout<<"The value of a != b is :"<<(a!=b)<<endl;
    cout<<"The value of a >= b is :"<<(a>=b)<<endl;
    cout<<"The value of a <= b is :"<<(a<=b)<<endl;
    cout<<"The value of a < b is :"<<(a<b)<<endl;
    cout<<"The value of a > b is :"<<(a==b)<<endl;
    cout<<""<<endl;
    cout<<""<<endl;

    //Logical operators
    cout<<"Following are the Logical Operators"<<endl;
    cout<<"The value of the and'&&' operator ((a==b) && (a<b)) is: "<<((a==b)&&(a<b))<<endl;
    cout<<"The value of the or'||' operator ((a==b) || (a<b)) is: "<<((a==b)||(a<b))<<endl;
    cout<<"The value of the not'!' operator   (!(a==b)) is: "<<(!(a==b))<<endl;

}
