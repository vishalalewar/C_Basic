#include<iostream>
using namespace std;
class A
{

};
class b 
{
public:
	int value;
	char size[4];
};
int main()

{
	cout<<"sizeof int:"<<sizeof(int)<<endl;
	cout<<"size of char:"<<sizeof(char)<<endl;
	cout<<"size of class a:"<<sizeof(A)<<endl;
	cout<<"size of class b:"<<sizeof(b)<<endl;
}

