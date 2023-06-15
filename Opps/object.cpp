#include<iostream>
using namespace std;

class MyClass
{
    public:
        int myNum;
        string myString;
};

int main()
{
    MyClass myObj;
    myObj.myNum = 15;
    myObj.myString = "My name is Kunal";

    cout<<myObj.myNum<<endl;
    cout<<myObj.myString<<endl;
}