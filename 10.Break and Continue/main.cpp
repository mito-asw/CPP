#include <iostream>
using namespace std;

int main() {

/*
    ->Break statements in loops are used to terminate the loop.
    ->Initialize integer variable “i” with value “0”
    ->Check the condition if the value of the variable "i” is smaller than “5”
    ->If the condition is true go into the loop body
    ->Execute “cout” function
    ->Check the condition if the value of the variable "i” is equal to “2”, if it is equal terminate the loop and get out of loop body
    ->Update the value of “i” by one
    ->Keep repeating these steps until the loop condition gets false, or the “if” condition inside the loop body gets true.

    for (int i = 0; i < 5; ++i) {

        cout<<i<<endl;
        if (i==3)
            break;
    }

 */

/*

    ->Initialize integer variable “i” with value “0”
    ->Check the condition if the value of the variable "i” is smaller than “5”
    ->If the condition is true go into the loop body
    ->Check the condition if the value of the variable "i” is equal to “3", if it is equal terminate the loop for the current iteration and go to the next iteration
    ->Execute “cout” function
    ->Update the value of “i” by one
    ->Keep repeating these steps until the loop condition gets false.


    for (int i = 0; i < 5; ++i) {

        if (i==3)
        {
            continue;
        }
        cout<<i<<endl;
    }



    return 0;


*/

}
