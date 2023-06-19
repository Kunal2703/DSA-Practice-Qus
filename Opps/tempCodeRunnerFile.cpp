// Example:

#include<iostream>
using namespace std;

class Test
{
public:
	Test()
    {
		cout<<"\nConstructor executed" << endl;
	}

	~Test()
    {
		cout<<"Destructor executed"<< endl;
	}
};
int main()
{
	Test t;
	
	return 0;
}
