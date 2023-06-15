#include<iostream>
using namespace std;

#define PI  3.14

class Circle
{
    private:
        float radius;

    public:
        void getRadius(void)
        {
            cout << "Enter the radius of the circle" << endl;
            cin >> radius;
        }


        float area(void)
        {
            return (PI * radius * radius);
        }

        float circumference(void)
        {
            return (PI * 2 * radius);
        }
};

int main()
{
    Circle c;
    c.getRadius();
    cout << "Area: " << c.area() << endl;
    cout << "Circumference: " << c.circumference() << endl;

    return 0;
}