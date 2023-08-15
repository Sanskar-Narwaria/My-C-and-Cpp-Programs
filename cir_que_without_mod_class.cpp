#include<iostream>
//#include<process.h>
using namespace std;
#define mxsize 5
class c_queue {
   int cqueue[mxsize],front,rear;
   public:
      void free(){
        cout<<"\nFront="<<front<<endl;
        cout<<"\nRear="<<rear<<endl; 
      }
      void cq_insert(int val);
      void cq_delete();
      void show();
      c_queue()
      {
         front=-1,rear=-1;
      }
};
void c_queue::cq_insert(int val) {
	   if ((front == 0 && rear == mxsize-1) || (front == rear+1)) {
      cout<<"Queue Overflow \n";
      return;
   }
   if (front == -1) {
      front = 0;
      rear = 0;
   } else {
      if (rear == mxsize - 1)
      rear = 0;
      else
      rear = rear + 1;
   }
   cqueue[rear] = val ;

}
void c_queue::cq_delete() {
	   if (front == -1) {
      cout<<"Queue Underflow\n";
      return ;
   }
   cout<<"Element deleted from queue is : "<<cqueue[front]<<endl;

   if (front == rear) {
      front = -1;
      rear = -1;
   } else {
      if (front == mxsize - 1)
      front = 0;
      else
      front = front + 1;
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
              cout<<cqueue[i]<<endl;
          }
      }
      if(front>rear)
      {
          for(i=front;i<mxsize ;i++)
          {
              cout<<endl<<cqueue[i];

          }
          for(i=0;i<=rear;i++)
          {
              cout<<endl<<cqueue[i];
          }
      }
   }
   

   int main() {
      int c,i;
      c_queue cqu;
      cout<<"\n 1.insert";
      cout<<"\n 2.delet";
      cout<<"\n 3.show";
      cout<<"\n 4.exit";
      do//perform switch opeartion 
      {
    
      cout<<"\n Enter your choice:";
      cin>>c;
      switch(c) {
         case 1:
            int item;
            cout<<"\nEnter item to be inserted =";
            cin>>item;
            cqu.cq_insert(item);
            break;
         case 2:
            //cout<<"\nDeleted element is= ";
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
