#include<iostream>
using namespace std;
int main()
{
	int a[10]={30,20,70,50,10,80,100,60,90,40};
	int i,j,temp;
	for (i=0;i<=9;i++)
	{
		for (j=0;j<=9-1-i;j++)
		{
			if (a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				
			}
		}
	}
		cout<<"\nSorted arry Using bubble sort is:\n";
		for (i=0;i<=9;i++)
		{
			cout<<a[i]<<" ";
		}
	}

