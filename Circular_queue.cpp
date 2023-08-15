#include<iostream>
//#include<process.h>
using namespace std;
#define mxsize 5
class c_queue {
   int a[mxsize],front,rear;
   public:
      void free(){
        cout<<"\nFront="<<front<<endl;
        cout<<"\nRear="<<rear<<endl; 
      }
      void cq_insert();
      void cq_delete();
      void show();
      c_queue()
      {
         front=-1,rear=-1;
      }
};
void c_queue::cq_insert() {
    int item;
    if (front==(rear+1)%mxsize)
    {
        cout<<"\nC-Queue is full";
        return;
    }
    else 
    {
        cout<<"\nEnter the element to be inserted= ";
        cin>>item;
        if (front==-1)
        {
            front=0;
        }

        rear=(rear+1)%mxsize;
        a[rear]=item;
        
        
    }
}
void c_queue::cq_delete() {
      int item;
      if(front==-1) {
         cout<<"\nC-Queue is Empty";
         return;
      }
      else {
          item=a[front];
          cout<<"the deleted element is:"<<item;
          if(front==rear) {
            front=rear=-1;
         } else {
             front=(front+1)%mxsize;
         }
            
      }
   }
   void c_queue::show() {
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
          for(i=front;i<mxsize ;i++)
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
      c_queue cqu;
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

            cqu.cq_insert();
            break;
         case 2:
            cout<<"\nDeleted element is= ";
            cqu.cq_delete();
            break;
         case 3:
            cqu.show();
            break;
         
         default:
            cout<<"invalid choice";
      }
      cqu.free();
   } while(c!=4);
   return 0;
}
