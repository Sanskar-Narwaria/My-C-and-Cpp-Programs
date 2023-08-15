#include<iostream>
using namespace std;
int main()
{
	int a[10]={30,20,70,50,10,80,100,60,90,40};
	int i,j,temp;
	for (i=1;i<=9;i++)
	{
		temp=a[i];
		j=i-1;
		while ((temp<a[j])&&(j>=0))
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
		cout<<"\nSorted arry Using Insertion sort is:\n";
		for (i=0;i<=9;i++)
		{
			cout<<a[i]<<" ";
		}
	}

