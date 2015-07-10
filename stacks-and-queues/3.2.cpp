#include<stdio.h>
#include<conio.h>
#include<iostream.h>

int po=-1;
class stacky
{
public:
	int value;
	int minvalue;
	stacky(int,int);
	stacky();
};
stacky::stacky()
{}
stacky stack[50];

stacky::stacky(int x,int y)
{
value=x;
minvalue=y;
}
int min()
{
if(po==-1)
return 10000;
else
return stack[po].minvalue;
}


push(int data)
{
int y=min();
stacky st(data,y<=data?y:data);
stack[++po]=st;
}
main()
{
	int y=0,ch,data;
	do
	{
		cout<<"PUSH OR DELETE or MIN";
		cin>>ch;
		switch(ch)
		{

		case 1: cout<<"Enter data";
			cin>>data;
			push(data);
			break;
		case 2:po--;
			break;

		case 3:int c=min();
			cout<<c;
			break;
		}
		cout<<"CON?";
		cin>>y;

	}
	while(y==1);
}
