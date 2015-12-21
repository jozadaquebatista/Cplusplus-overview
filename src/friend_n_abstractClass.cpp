#include <iostream>
#include <cstdlib>

class A
{
private:
	static int aValue, bValue;

public:
	A(){}
	virtual ~A(){}

	virtual const char *myFunc()=0;

	friend class B;
};

class B : public A
{
private:
	int xParam, yParam;
public:
	B(){}
	~B(){}
	const char *Msg(){ return "This is only a simple message."; }

	int getSum()const{ return (aValue + bValue); }
	virtual const char *myFunc(){ return "The result is: "; }
};

int A::aValue = 45;
int A::bValue = 30;

int main()
{

	B *b = new B;

	std::cout << b->myFunc() << " " << b->getSum() << std::endl;

	delete b;
	return EXIT_SUCCESS;
}
