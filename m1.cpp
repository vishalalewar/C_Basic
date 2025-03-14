#include<iostream>
//#include<thread>
using namespace std;
int oddsum=0;
int evensum=0;
void FunOdd(int start,int end)
{
        for(int i=start;i<=end;i++)
        {
                if(i%2!=0)
                {
                        oddsum+=i;
                }
        }
}
void FunEven(int start,int end)
{
        for(int i=start;i<=end;i++)
        {
                if(i%2==0)
                {
                        evensum+=i;
                }
        }
}
int main()
{
        int start=0;
        int end=1999999;

        FunOdd(start,end);
        FunEven(start,end);

        std::cout<<"Odd sum:"<<oddsum<<endl;
        std::cout<<"even sum:"<<evensum<<endl;
}
