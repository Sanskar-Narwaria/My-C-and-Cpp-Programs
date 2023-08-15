#include<stdio.h>
#include<process.h>
#include<conio.h>
#include<cstddef>
using namespace std;
struct node{
	int num;
	struct node*next;
}*start=NULL,*last=NULL;

typedef struct node node;


node *insertfirst(node *start)
{
	node *p;
	//p=(node *)malloc(sizeof(node));
	printf("\nEnter the number");
	scanf("%d",&p->num);
	if (start==Null)
	{
		p->next=p;
		start=p;
		last=p;
		
	}
	else{
		p->next=start;
		start=p;
		last->next=p;
		
	}
}
node *inserlast(node *start)
{
	node *p;
	p=(node *)malloc(sizeof(node));
	printf("\nEnter a Number :");
	scanf("%d",&p->num;);
	if (start==NULL)
	{
		p->next=p;
		start=last=p;
	}
	else {
		last->next=p;
		last=p;
		last->next=start;
	}
	return (start);
}
void Traverse()
{
	node *p;
	p=start;
	if(p==NULL)
	{
		printf("List is empty";
	}
	else {
		while(p->next=start)
		{
			cout<<p->num;
			p=p->next;
		}
	}
}
int main()
{
	int choice;
	do{
		printf("1.Insert at beginning\n2.Insert at end\n3.TRaversing\nEnter your choice:";
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				start=insertfirst(start);
				break;
			case 2:
				start=insertlast(start);
				break;
			case 3:
				Traverse();
				break;
			case 4:
				exit(0);
		
		}
	}while(choice!=6);
	return 0;
}
