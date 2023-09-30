#include <iostream>
using namespace std;

int main()
{

    int array[]={0,1,2,3,4,5};
    int ele =1 ;
    int i=0;

    /*
    for ( i = 0; i < 6; ++i) {

        cout<<"The "<<ele<<"st "<<"of the array is : "<<array[i]<<endl;
        ele++;
    }

    cout<<endl;
    cout<<endl;
    cout<<endl;
*/

  /*  while ( i < 6)
    {
        cout<<"The "<<ele<<"st "<<"of the array is : "<<array[i]<<endl;
        ele++;
        i++;

    }

*/


 /* do
    {
        cout<<"The "<<ele<<"st "<<"of the array is : "<<array[i]<<endl;
        ele++;
        i++;
    }
while(i < 6);

*/

/*
 we have printed the value at pointer "*p", and it has shown us the value of the first index of the array "marks"
 because the pointer was pointing at the first index of an array and the value at that index was "0". If we want to
 access the 2nd index of an array through the pointer, we can simply increment the pointer with 1. For example: "*(p+1)"
 will give us the value of the 2nd index of an array = 1.

 1st we have printed the value at pointer “*p”; 2nd we have printed the value at pointer “*(p+1)”; 3rd we have printed
 the value at pointer “*(p+2)”; 4th we have printed the value at pointer “*(p+3)".
 This program will output the values  at "0, 1, 2, 3" indices of an array.

int* p = array;
cout<<"The value of array[0] is : "<<*p<<endl;
cout<<"The value of array[1] or *(p+1) is : "<<*(p+1)<<endl;
cout<<"The value of array[2] or *(p+2) is : "<<*(p+2)<<endl;
cout<<"The value of array[3] or *(p+3) is : "<<*(p+3)<<endl;
    return 0;


    */
}