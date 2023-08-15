#include<iostream>
#include<process.h>
using namespace std;
#define dqsize 10
class dequeue {
   int a[dqsize],front,rear;
   public:
      void free(){
        cout<<"\nFront="<<front<<endl;
        cout<<"\nRear="<<rear<<endl; 
      }
      void insert_at_beg(int);
      void insert_at_end(int);
      void delete_fr_front();
      void delete_fr_rear();
      void show();
      dequeue()
      {
         front=-1,rear=-1;
      }
};
void dequeue::insert_at_end(int i) {
   if(rear>=dqsize-1) 
   {
      cout<<"\n insertion is not possible, overflow!!!!";
      return;
   } 
   else {
      if (front==-1)
      {
         front++;
      }
      rear=rear+1;
      a[rear]=i;

   }
}
void dequeue::insert_at_beg(int i) {
   if(front==0)
   {
      cout<<"\nQueue is full";
      return;
   }
   else if(front==-1)
   {
      front++;
      rear++;
      a[front]=i;
      
   }
   else 
   {
      front=front-1;
      a[front]=i;
   }
}
void dequeue::delete_fr_front() {
   if(front==rear)
   {
      cout<<"\nQueue is full";
      return;
   }
   else{
      cout<<"\nDeleted item is "<<a[front];
      front++;
   }
}

void dequeue::delete_fr_rear() {
      if(front==rear) {
         cout<<"deletion is not possible::dequeue is empty";
         return;
      }
      else {
         cout<<"Deleted element is:"<<a[rear];
         if(front==rear) {
            front=rear=-1;
         } else
            rear=rear-1;
      }
   }
   void dequeue::show() {
      if(front==-1) {
         cout<<"Dequeue is empty";
      } 
      else {
         for(int i=front;i<=rear;i++) {
            cout<<a[i]<<" ";
         }
      }
   }
   int main() {
      int c,i;
      dequeue d;
      do//perform switch opeartion 
      {
      cout<<"\n 1.insert at beginning";
      cout<<"\n 2.insert at end";
      cout<<"\n 3.show";
      cout<<"\n 4.deletion from front";
      cout<<"\n 5.deletion from rear";
      cout<<"\n 6.exit";
      cout<<"\n enter your choice:";
      cin>>c;
      switch(c) {
         case 1:
            cout<<"enter the element to be inserted";
            cin>>i;
            d.insert_at_beg(i);
            break;
         case 2:
            cout<<"enter the element to be inserted";
            cin>>i;
            d.insert_at_end(i);
            break;
         case 3:
            d.show();
            break;
         case 4:
            d.delete_fr_front();
            break;
         case 5:
            d.delete_fr_rear();
            break;
         default:
            cout<<"invalid choice";
      }
      d.free();
   } while(c!=6);
   return 0;
}
