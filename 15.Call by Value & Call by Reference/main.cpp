#include <iostream>
using namespace std;

//This method will not swap the numbers
void swap(int a , int b)
{                          //temp   a   b
    int temp = a;          //  2    2   3
    a = b;                 //  2    3   3
    b = temp;              //  2    3   2
}



//Call by value using pointer

void SwapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call by using reference variable

void swap1(int &q, int &e)
{
    int temp = q;
    q = e;
    e = temp;
}

int main()
{
  int x = 2, y = 3;
  int f = 5, c = 6;
    //Call by value using pointer
  cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
  SwapPointer(&x,&y);
  cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;

  cout<<endl;
  cout<<endl;

    // Call by using reference variable
    cout<<"The value of f is "<<f<<" and the value of c is "<<c<<endl;
   swap1(f,c);
    cout<<"The value of f is "<<f<<" and the value of c is "<<c<<endl;



    return 0;
}