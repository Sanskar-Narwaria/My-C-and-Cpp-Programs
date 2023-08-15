#include<iostream> 
#include<conio.h>
using namespace std;



int main()
{

int a[100] , i, loc, mid, beg, end, n, flag = 0, item;


cout << "How many elements"; 
cin >>n
;
cout<<"Enter the element of the array" << endl
;

for(i=0; i<=n-1;i++)


{cin >> a[i];
}


cout<<"Enter the element to be searching"; 
cin >> item;


loc = 0;
beg = 0;


end = n - 1;


while (beg<=end)
{


mid= ((beg+end)/2); 


if (item == a[mid])


{
cout << "search is successfull" << endl;


loc = mid;


cout<< "Position of the item"<<loc+1 ;


flag =flag+1;


} 
if(item < a[mid])
{


end =mid-1;

}

else
{


beg = mid+1;
}



}
if(flag==0)





{


cout<<"search is not successfull";

}
return 0;
}

