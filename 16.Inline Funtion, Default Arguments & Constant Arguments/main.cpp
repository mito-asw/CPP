#include<iostream>
using namespace std;

//inline function
inline int product(int a, int b)
{
    return a*b;
}
//its not good to write inline function for bigger functions but for smaller is functrions its okay


//Default Arguments
int InterestonDeposit(int deposit, float interest = 1.04)
{
    return deposit*interest;
}


//Constant Arguments
//Constant arguments are used when you don’t want your values to be changed or modified by the function.
// An example of constant arguments is shown below
int strlen(const char *p){

}


int main()
{
    int x, y;
    x = 3;
    y = 4;

    cout<<"The product of x and y is "<<product(x,y)<<endl;

int MoneyDeposit = 100000;
cout<<"If Adults deposit "<<MoneyDeposit<<" They will recieve "<<InterestonDeposit(MoneyDeposit)<<endl;
    cout<<"If Senior Citizens deposit "<<MoneyDeposit<<" They will recieve "<<InterestonDeposit(MoneyDeposit,1.1)<<endl;



}
