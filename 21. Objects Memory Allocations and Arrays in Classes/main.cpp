#include <iostream>
using namespace std;
class Shop
{
    int itemID[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void){ counter  = 0 ;}
    void setPrice(void);
    void getPrice(void);

};


void Shop ::setPrice() {

    cout<<"Enter Id of the iteme: "<<counter + 1 <<endl;
    cin>>itemID[counter];

    cout<<"Enter Price of the iteme: "<<counter + 1 <<endl;
    cin>>itemPrice[counter];

    counter++;

}

void Shop ::getPrice() {

    for (int i = 0; i < counter; i++) {
        cout<<"Item ID : "<<itemID[i]<<endl;
        cout<<"Price: "<<itemPrice[i]<<endl;
    }


}

int main() {

    Shop Items;
    Items.initCounter();
    Items.setPrice();
    Items.setPrice();
    Items.setPrice();
    Items.getPrice();


    return 0;
}
