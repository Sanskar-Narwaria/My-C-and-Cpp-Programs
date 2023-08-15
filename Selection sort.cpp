#include<iostream>
using namespace std;
int main()
{
	int a[10]={30,20,70,50,10,80,100,60,90,40};
	int i,j,temp,min,loc;
	for (i=0;i<=9;i++)
	{
		min=a[i];
		loc=i;
		for (j=i+1;j<=9;j++)
		{
			if (a[j]<min)
			{
				min=a[j];
				loc=j;
			}
		}
		if (loc!=i)
		{
			temp=a[i];
			a[i]=a[loc];
			a[loc]=temp;
		}
		
	}
		cout<<"\nSorted arry Using Selection sort is:\n";
		for (i=0;i<=9;i++)
		{
			cout<<a[i]<<" ";
		}
	}

