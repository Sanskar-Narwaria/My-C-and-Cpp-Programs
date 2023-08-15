#include<iostream.h>
#include<conio.h>
#include<process.h>
#define MAXSIZE 10
class stack
{
int stack[MAXSIZE];
int Top;
public:
void traverse();
void push();
int pop();
stack()
{
Top=-1;
}
};
void stack::push()
{
int item;
if(Top==MAXSIZE-1)
{
cout<<endl<<"Stack is full";
getch();
exit(0);
}
else{
cout<<"Enter the element to be inserted";
cin>>item;
Top=Top+1;
stack[Top]=item;
}
}
int stack::pop()
{
int item;
if(Top==-1)
{
cout<<"Stack is Empty";
getch();
exit(0);

}
else{
item=stack[Top];
Top=Top-1;
}
return (item);

}
void stack::traverse()
{
int i;
if (Top==-1)
{
cout<<"The Stack is empty";
getch();
exit(0);
}
else{
cout<<"Traverse the element";
for (i=Top;i>=0;i--)
{
cout<<endl<<stack[i];

}
}
}
void main()
{
int choice;
char ch;
stack s;
do{
clrscr();
cout<<"1.PUSH\n2.POP\n3.TRAVERSE\nEnter your choice ";
cin>>choice;
switch(choice)
{
case 1:
s.push();
break;
case 2:
cout<<endl<<"The deleted element is "<<s.pop();
break;
case 3:
s.traverse();
break;
default:
cout<<"\nWrong choice";
}
cout<<"\nDo you Wish to continue (Y/N)";
//fflush(stdin);
cin>>ch;
}
while(ch=='y'||ch=='Y');
}


