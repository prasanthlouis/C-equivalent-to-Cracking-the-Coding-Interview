#include<iostream.h>
#include<conio.h>
#include<string.h>
int len;
struct node
{
	node *next;
	char x;
};
check(node *cond)
{
	int flag=0,flageven=0;
	char values[120];
	int i=0;
	node *slowrunner,*fastrunner;
	slowrunner=fastrunner=cond;
	while(fastrunner->x!=NULL)
	{
		values[i++]=slowrunner->x;
		slowrunner=slowrunner->next;
		fastrunner=fastrunner->next->next;
	}
	i--;
	while(slowrunner->x!=NULL)
	{
	cout<<values[i];
	cout<<slowrunner->x;
	if(len%2!=0 && flageven==0)
	{
	i--;
	flageven=1;
	}
		if(slowrunner->x==values[i--])
		{

			slowrunner=slowrunner->next;
			continue;
		}
		else
		{
		flag=1;
		break;
		}
	}
	if(flag==0)
	cout<<"PALINDROME";
	else
	cout<<"NOT A PALINDROME";
	getch();

}



int main()
{
	int i;
	char data[100];
	node *cond,*start;
	cond=new node;
	start=cond;
	cout<<"Enter the string";
	cin>>data;
	len=strlen(data);
	for(i=0;i<len;i++)
	{
		cond->x=data[i];
		cond->next=new node;
		cond=cond->next;
	}
	cond->x=NULL;
	cond=start;
	check(cond);
	return 0;
}

