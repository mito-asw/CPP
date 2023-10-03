#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n==0){
        return 1;
    }

   n= n * factorial(n-1);   //This will recurse or continue being called until n-1 = 0 is satisfied
    return  n;
}

int fibonacci(int y) {
    int a = 0, b = 1, c ;
    if (y == 0)
    return a;

    for (int i = 2; i <=y ; ++i) {
        c = a + b;
        a = b;
        b = c;

    }
    return b;
}





int main()
{
    int a;

cout<<"Enter the number : "<<endl;
    cin>>a;
    cout<<"The factorial of "<<a<<" is "<<factorial(a);

    cout<<endl;
    cout<<endl;

int z;

cout<<"Enter a number: ";
cin>>z;
cout<<"The fibonacci of "<<z<<" is "<<fibonacci(z);
//Fibonacci sequene 1,1,2,3,5,8,13.....

}
