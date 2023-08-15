#include<iostream>
using namespace std;
int quicksort(int a[],int l,int h)
{
	int temp,key,low ,high;
	low=l;
	high=h;
	key=a[(low+high)/2];
	do {
		while(key>a[low])
		{
			low++;
		}
		while(key<a[high])
		{
			high--;
		}
		if(low<=high)
		{
			temp=a[low];
			a[low++]=a[high];
			a[high--]=temp;
		}
	}
	while(low<=high);
	if(l<high)
	{
		quicksort(a,l,high);
	}
	if (low<h)
	{
		quicksort(a,low,h);
	}
	return 0;
}
int  main()
{
	int a[10]={10,2,7,5,1,8,9,6,3,4};
	int l,h;
	
	quicksort(a,0,9);
	cout<<"Sorted Array is :\n";
	for (int i=0;i<=9;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}

