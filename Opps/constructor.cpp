#include<iostream>
using namespace std;

class Car       //Class
{
    public:     //accesss specifier
        string brand;   //attribute
        string model;   //attribute
        int year;       //attribute

        Car(string x, string y, int z); //constructor decleration
};


//constructor define outside the class
Car :: Car(string x, string y, int z)
{
    brand = x;
    model  = y;
    year = z;
}

int main()
{
    Car carObj1("BMW", "X5", 1999);
    Car carObj2("Ford", "Mustang", 1969);

    cout << carObj1.brand <<" " << carObj2.model << " " << carObj1.year << endl;
    cout << carObj2.brand <<" " << carObj2.model << " " << carObj1.year << endl;

    return 0;
}