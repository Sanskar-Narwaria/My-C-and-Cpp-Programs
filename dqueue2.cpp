#include<iostream>
using namespace std;
#define MAXSIZE 10
class dequeue {
   int q[20],front,rear;
   public:
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
   if(rear>=MAXSIZE-1) {
      cout<<"\n insertion is not possible, overflow!!!!";
   } else {
      if(front==-1) {
         front++;
         rear++;
      } else {
         rear=rear+1;
      }
      q[rear]=i;
      cout<<"\nInserted item is"<<q[rear];
   }
}
void dequeue::insert_at_beg(int i) {
   if(front==-1) {
      front=0;
      q[++rear]=i;
      cout<<"\n inserted element is:"<<i;
   } else if(front!=0) {
      q[--front]=i;
      cout<<"\n inserted element is:"<<i;
   } else {
      cout<<"\n insertion is not possible, overflow!!!";
   }
}
void dequeue::delete_fr_front() {
   if(front==-1) {
      cout<<"deletion is not possible::dequeue is empty";
      return;
   }
   else {
      cout<<"the deleted element is:"<<q[front];
      if(front==rear) {
         front=rear=-1;
         return;
      } else
         front=front+1;
      }
   }
   void dequeue::delete_fr_rear() {
      if(front==-1) {
         cout<<"deletion is not possible::dequeue is empty";
         return;
      }
      else {
         cout<<"the deleted element is:"<<q[rear];
         if(front==rear) {
            front=rear=-1;
         } else
            rear=rear-1;
      }
   }
   void dequeue::show() {
      if(front==-1) {
         cout<<"Dequeue is empty";
      } else {
         for(int i=front;i<=rear;i++) {
            cout<<q[i]<<" ";
         }
      }
   }
   int main() {
      int c,i;
      dequeue dq;
      do{
	  
      //perform switch opeartion {
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
            dq.insert_at_beg(i);
         break;
         case 2:
            cout<<"enter the element to be inserted";
            cin>>i;
            dq.insert_at_end(i);
         break;
         case 3:
            dq.show();
         break;
         case 4:
            dq.delete_fr_front();
         break;
         case 5:
            dq.delete_fr_rear();
         break;
         case 6:
            exit(1);
         break;
         default:
            cout<<"invalid choice";
      }
   } while(c!=7);
}
