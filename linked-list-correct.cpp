//singly linked list;
#include<iostream>
using namespace std;
struct node{
	int info;
	node *next;
};
class list{
	node *ptr,*first;
	public:
		list()
		{
			first=NULL;
		}
		int insert_beg();
		int insert_end();
		int delete_beg();
		int delete_end();
		int display();
};
int list::insert_beg()
{
	ptr=new node;
	int item;
	cout<<"\nEnter Elemt to be inserted at beg:";cin>>item;
	ptr->info=item;
	if (first==NULL)
	{
		//first=ptr;
		ptr->next=NULL;
		
	}
	else {
		ptr->next=first;
	}
	first=ptr;
}
int list::insert_end()
{
	node *loc;
	ptr=new node;
	int item;
	cout<<"\nEnter Elemt to be inserted at end:";cin>>item;
	ptr->info=item;
	if (first==NULL)
	{
		first=ptr;
	}
	else {
	
	loc=first;
	while (loc->next!=NULL)
	{
		loc=loc->next;
	}
	loc->next=ptr;
}
}
int list::delete_beg()
{
	ptr=first;
	first=first->next;
	cout<<"\nDELETED NODE IS ="<<ptr->info;
	delete ptr;
}
int list::delete_end()
{
	node *loc;
	loc=first;
	while (loc->next!=NULL)
	{
		loc=loc->next;
	}
	ptr=loc;
	cout<<"\nDELETED NODE IS ="<<ptr->info;
	delete ptr;
}
int list::display()
{
	node *loc;
	loc=first;
	while (loc!=0)
	{
		cout<<endl<<loc->info;
		loc=loc->next;
	}
}
int main()
{
	list l;
	char c;
	int ch;
	do { 
	  cout<<"\nChoices:\n1.INSERT AT BEG\n2.INSERT AT END\n3.DELETE BEG\n4.DELETE END\n5.TRAVERSE\nEnter your choice:";
	  cin>>ch;
	  switch(ch)
	  {
	  	case 1:
	  		l.insert_beg();
	  		break;
	  	case 2:
	  		l.insert_end();
	  		break;
	  	case 3:
	  		l.delete_beg();
	  		break;
	  	case 4:
	  		l.delete_end();
	  		break;
	  	case 5:
	  		l.display();
	  		break;
	  		
	  }
	  cout<<"\nDO YOU WANT TO CONTINUE(Y/y)=";cin>>c;
    }while(c=='y'||c=='Y');
	
}
