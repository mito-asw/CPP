#include <iostream>
using namespace std;


class Student
{
private:
    int RollNumber;
    string Name;
    float Percentage;

public:
    string ClassName;


    void setData(int RollNumber1, string name1, float percentage1);       //Declaration

    void getData()
{
    cout<<"Roll Number: "<<RollNumber<<endl;
    cout<<"Name of the Student: "<<Name<<endl;
    cout<<"Percentage in class 10: "<<Percentage<<endl;
    cout<<"Name of the class: "<<ClassName<<endl;

}

};

void Student :: setData(int RollNumber1, string name1, float percentage1)
{
    RollNumber = RollNumber1;
    Name = name1;
    Percentage = percentage1;
}


int main() {
Student Student1;
Student1.ClassName = "Lily";
Student1.setData(12, "Adesh", 94.20);
Student1.getData();


    return 0;
}
