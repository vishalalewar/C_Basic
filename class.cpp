#include<iostream>
using namespace std;

class A
{
public:
	A()
	{
	cout<<"A constractor"<<endl;
	}
};
class B : public A
{
public:
	B()
	{
	cout<<" B Constractor"<<endl;
	}
};

int main()
{
	A obj1;
	//B obj2;
	
	return 0;
}

