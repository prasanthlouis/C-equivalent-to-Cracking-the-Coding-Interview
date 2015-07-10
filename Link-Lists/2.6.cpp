#include<iostream.h>
#include<conio.h>
struct node
{
	node *next;
	int x;
};
void check(node *head)
{
cout<<"hi";
node *slowrunner,*fastrunner;
slowrunner=fastrunner=head;
do
{
slowrunner=slowrunner->next;
fastrunner=fastrunner->next->next;
}while(slowrunner!=fastrunner);
if(slowrunner==fastrunner)
cout<<"COLLISION DETECTED";
slowrunner=head;
while(slowrunner!=fastrunner)
{
slowrunner=slowrunner->next;
fastrunner=fastrunner->next;
}
cout<<fastrunner->x;
getch();
clrscr();
}
int main()
{       int i,data;
	node *cond,*start,*head;
	cond=new node;
	head=cond;
	for(i=0;i<3;i++)
	{
		cin>>data;
		cond->x=data;
		cond->next=new node;
		cond=cond->next;
	}
	start=cond;
	for(i=0;i<4;i++)
	{
		cin>>data;
		cond->x=data;
		cond->next=new node;
		cond=cond->next;
	}
	cin>>data;
	cond->x=data;
	cond->next=start;
	check(head);

}
