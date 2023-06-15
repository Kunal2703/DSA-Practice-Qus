#include<iostream>
using namespace std;

class Car
{
    public:
        string brand;
        string model;
        int year;
};

int main()
{
    Car carObj1;
    carObj1.brand = "Ford";
    carObj1.model = "Mustang";
    carObj1.year = 1995;

    Car carObj2;
    carObj2.brand = "BMW";
    carObj2.model = "X5";
    carObj2.year = 1969;

    cout << carObj1.brand << " " << carObj2.model << " "<< carObj1.year<< endl;
    cout << carObj2.brand << " " << carObj2.model<< " " << carObj2.year << endl;

    return 0;

}