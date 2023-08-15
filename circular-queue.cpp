#include<iostream> 
#include<stdio.h>
#include<conio.h>
#define MAXSIZE 5
using namespace std; 
class quearr{

int cq[10] ;
int front, rear; char ch ; 
public:
 void cqinsert() ; 
 int cqdelete(); 
 void cqdisplay() ; 
 quearr()
 {front = - 1 , rear = 0 ;
 }
};
int main()

{

int choice;

quearr que;

//clrscr();

do

{

cout<< endl <<"-- 1.Insert-------" << endl;

cout << "----2.Delete--------" << endl;

cout <<"-----3.Display-----" << endl;
cout <<"-----4.Exit" << endl;

cout << "Enter your choice" ;

cin>>choice;

switch(choice)

{

case 1: que.cqinsert();

break;

case 2: que.cqdelete();

break;

case 3: que.cqdisplay();

break;

case 4: cout<<endl<<"Wrong Choice";

}
}

while(choice !=4) ;

}
void quearr::cqinsert(){


int num;

if(front==(rear+1)% MAXSIZE)

{

cout<< "Queue is full" << endl;

return;

}
else{


cout << "Enter the element to be inserted"; 
cin>>num ;

if(front = - 1) {
front = rear = 0} 

else{
	rear = (rear + 1) % MAXSIZE ; 
	cq[rear] = num; 
}
}
return;

}
int quearr cqdelete()

(

int num;

if(front = - 1){


cout  "Queue is Empty" << endl;

return 0;

}

else

{

num = cq[front] ;

cout<< "Deleted element is" <<< cq[front];

if(front==rear){


front = rear = - 1 ;
}
else{


front=(front+1)% MAXSIZE;}
}


return(num);



}

void quearr::cqdisplay()

(

int i;

if( front==-1){

cout << "Queue is empty" << endl;

return;}

else

{

cout<< "The status of the queue";
for(i= front; <=rear;i++ ) {


cout<< endl <<cq[i] ;

}

}

if(front > rear){


for(i=front ; i < MAXSIZE ; i++){


cout<< endl <<cq[i] ;

} for(i=0;i<=rear;i++)

{
cout << endl <<cq[i] ;
}

}
return 0;
}






