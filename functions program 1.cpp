#include<iostream>
using namespace std;
int fact(int a)
{
	if(a==0 || a==1)
	{
		return 1;
	}
	else
	{
		return a*fact(a-1);
	}
}
int main()
{
	int n;
	cout<<"Enter a Number:";
	cin>>n;
	int result;
	result=fact(n);
	cout<<"Factorial of " <<  n <<" is " << result;
	return 0;
}
