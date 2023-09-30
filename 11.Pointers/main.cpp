#include <iostream>
using  namespace std;

int main()
{

    int a = 3;
    int *b = &a;     //Here b is a pointer variable which stores the address of a


    cout<<"The address of a is :  "<<&a<<endl;    //Here & is address of Operator
    cout<<"The address of a is :  "<<b<<endl;

    cout<<endl;

    cout<<"The value at a is :  "<<a<<endl;
    cout<<"The value at b is :  "<<*b<<endl;   //Here * is value at the pointer b

    cout<<endl;
    cout<<endl;
    cout<<endl;

// Pointer to Pointer

int **d = &b;   //Here d is a pointer which stores the value of b which is also a pointer

    cout<<"The address of b is :  "<<&b<<endl;
    cout<<"The address of b is :  "<<d<<endl;

    cout<<endl;

    cout<<"The value at b is :  "<<*b<<endl;
    cout<<"The value at d is :  "<<**d<<endl;


    return 0;
}
