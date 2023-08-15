#include<iostream>
using namespace std;
int fact ()
{
	int b,f=1;
	cout<<"\nEnter the number =";
	cin>>b;
	for (int i=1;i<=b;i++)
	{
		f=f*i;
	}
	cout<<"\nFactorial of "<<b<<" is = "<<f;
	return 0;
}
int fib()
{
	int num;
	cout<<"\nEnter the last Number =";
	cin>>num;
	int a=0,b=1,c=0;
	cout<<"\nFibonacci Series :\n";
	for (int i=1;i<=num;i++)
	{
		cout<<a<<endl;
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}
int pallindrome()
{
	int num,temp,r,b=0;
	cout<<"\nEnter the number =";
	cin>>num;
	temp=num;
	while (temp!=0)
	{
		r=temp%10;
		b=b*10+r;
		temp=temp/10;
	}
	if (num=b)
	{
		cout<<"\nPALLINDROME";
	}
	else {
		cout<<"\nNOT A PALLINDROME";
	}
	return 0;
}
int main()
{
	int ch;
	cout<<"\nENTER THE CHOICE :\n1.FACTORIAL\n2.FIBONACCI\n3.PALLINDROME\n";
	cin>>ch;
	switch (ch){
		case 1:
			fact();
			break;
		case 2:
			fib();
			break;
		case 3:
			pallindrome();
			break;
		default :
			cout<<"\nWrong choice \n";
	}
	return 0;
}
