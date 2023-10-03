#include <iostream>
using namespace std;

//Calculate area of circle
float area( float r)
{
    return r * 3.14;
}

//Are of Rectangle
int area( int len, int brea)
{

    return len * brea;

}






int main()
{

    int radius;

    cout<<"Enter radius of the circle : "<<endl;;
    cin>>radius;

    cout<<"Area of the circle is : "<<area(radius);

    cout<<endl;
    cout<<endl;


    int length , breadth;

    cout<<"Enter length and breadth of the rectangle: "<<endl;
    cin>>length;
    cin>>breadth;

    cout<<"The area of rectangle is : "<<area(length,breadth);





}