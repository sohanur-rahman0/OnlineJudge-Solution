#include <iostream>
using namespace std;

class B
{
	public:

	// Virtual function
    virtual void f()
	{
		cout << "Base class function called.\n";
	}
};

class D: public B
{
	public:
	void f()
	{
		cout << "Derived class function called.\n";
	}
};

int main()
{
	B base;
	D derived;
//	base.f();
//	derived.f();

	B *basePtr = &derived;
	basePtr->f();

	basePtr = &derived;
	basePtr->f();

	return 0;
}
