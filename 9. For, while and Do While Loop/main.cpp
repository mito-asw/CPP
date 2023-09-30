#include <iostream>
using namespace std;

int main()
{

    //for loop

    for (int i = 0; i < 10 ; ++i)
    {
        cout<<i<<endl;    // This loop will continue until the condition mentioned above is satisfied
    }


    cout<<endl;

// Example of infinite for loop
    // for (int i = 1; 34 <= 40; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
    // }





    //while loop

    int i = 1;
    while(i<=10)
    {
        cout<<i<<endl;
        i++;
    }

// Example of infinite while loop
    // int i = 1;
    // while (true)
    // {
    //     cout << i << endl;
    //     i++;
    // }




    cout<<endl;

    // do while loop

    do {
        cout<<i<<endl;
        i++;
    }while(i<=40);

    cout<<endl;

    //Table of 6

    int n=6;
    for (int j = 1; j <= 10 ; j++)
    {
    cout<<n*j<<endl;
    }



}