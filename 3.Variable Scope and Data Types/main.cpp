#include<iostream>
using namespace std;

//Declaring a global variable
int GlobalVar = 1341;



int main()
{
    int A = 4;
    float F = 2.3;
    char C ='C';
    double D = 2.3435;
    bool B = true;

    cout<<"This is an int data type : "<<A<<"\n";
    cout<<"This is a float data type : "<<F<<"\n";
    cout<<"This is a char data type : "<<C<<"\n";
    cout<<"This is a double data type : "<<D<<"\n";
    cout<<"This is a bool data type : "<<B<<"\n";

    //A global variable can be accessed in main or any function the program
    cout<<"This is a global variable : "<<GlobalVar;




}