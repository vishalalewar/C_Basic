#include<iostream>
#include<thread>
using namespace std;
long long evensum=0;
long long oddsum=0;

void addeven(long long start,long long end)
{
	for(int i=start;i<=end;++i)
	{
		if(i%2==0)
		{
			evensum+=i;
		}
	}
}

void addOdd(long long  start,long long end)
{
        for(int i=start;i<=end;++i)
        {
                if(i%2==0)
                {
                        oddsum+=i;
                }
        }
}

int main()
{
	long long start=0;long long end=10000000;
	printf("even sum cal\n");

        std::thread t1(addeven,start,end);
	std::thread t2(addOdd,start,end);
        t1.join();
	t2.join(); 
	//addeven(start,end);
	//addOdd(start,end);
	cout<<"even Sum:"<<evensum<<endl;
	cout<<"odd Sum:"<<oddsum<<endl;
	return 0;
}
