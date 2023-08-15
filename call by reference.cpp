#include<iostream>
using namespace std;
int square(int *x)
{
	int z=*x*(*x);
	return z;
}
int main()
{
	int a,b;
	cout<<"Enter A no= ";
	cin>>a;
	b=square(&a);
	cout<<"Square of "<<a<<" is "<<b;
	return 0;
	
}
