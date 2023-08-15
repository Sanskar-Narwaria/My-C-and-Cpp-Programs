#include<iostream>
#include<process.h>
#include<stdlib.h>
#define maxsize 5
using namespace std;
class cqueue{
	private:
		int a[maxsize],front,rear;
	public:
		void cinsert();
		void cdelete();
		void cdisplay();
		cqueue(){
			front=-1,rear=-1;
		}
};
void cqueue::cinsert(){
	int item;
	cout<<"\nEnter an Element :";cin>>item;
	if (front==((rear+1)%maxsize))
	{
		cout<<"\nOverflow!!";
		return;
	}
	else {
		
	   if (front==-1)
     	{
		front++;
	    }
	   rear=(rear+1)%maxsize;
	   a[rear]=item;
		
	}
	cout<<"\nItem Insereted ";
}
void cqueue::cdelete(){
	int item;
	if (front==-1){
		cout<<"\nQueue is empty";
		return;
	}
	else {
		item=a[front];
		cout<<"\nDeleted item is "<<item;
		if (front==rear)
		{
			front=rear=-1;
		}
		else {
			front=(front+1)%maxsize;
		}
	}
}

void cqueue::cdisplay() {
       int i;
      if(front==-1) {
         cout<<"\nC-Queue is empty";
         return;
      } 
      else {
          cout<<"\nStatus of the queue is \n";
          for (i=front;i<=rear;i++)
          {
              cout<<a[i]<<endl;
          }
      }
      if(front>rear)
      {
          for(i=front;i<maxsize ;i++)
          {
              cout<<endl<<a[i];

          }
          for(i=0;i<=rear;i++)
          {
              cout<<endl<<a[i];
          }
      }
   }
   
   int main() {
      int c,i;
      cqueue cqu;
      do//perform switch opeartion 
      {
      cout<<"\n 1.insert";
      cout<<"\n 2.delet";
      cout<<"\n 3.show";
      cout<<"\n 4.exit";
      cout<<"\n enter your choice:";
      cin>>c;
      switch(c) {
         case 1:

            cqu.cinsert();
            break;
         case 2:
            cout<<"\nDeleted element is= ";
            cqu.cdelete();
            break;
         case 3:
            cqu.cdisplay();
            break;
         
         default:
            cout<<"invalid choice";
      }

   } while(c!=4);
   return 0;
}
