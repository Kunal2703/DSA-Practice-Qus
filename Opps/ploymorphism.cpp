#include<iostream>
using namespace std;

class Animal
{
    public:
        void animalSound()
        {
            cout<<"The animal make a sound" << endl;
        }
};

class Pig : public Animal
{
    public:
        void animalSound()
        {
            cout << "The pig make a sound wee wee" << endl;
        }
};

class Dog : public Animal
{
    public:
        void animalSound()
        {
            cout << "The Dog make a sound bow bow"<< endl;
        }

};

int main()
{
    Animal myAnimal;
    Pig myPig;
    Dog myDog;

    myAnimal.animalSound();
    myPig.animalSound();
    myDog.animalSound();

    return 0;
}