#include<stdio.h>
#include<iostream.h>
main()
{

int ch;
int arr[30];
int t1=-1,t2=-1,t3=-1,t4=-1;
int data;
int y=0;
do
{
cout<<"Enter which stack you want to use";
cin>>ch;
switch(ch)
{
case 1:cout<<"Enter or Delete";
       cin>>ch;
       switch(ch)
       {
       case 1:t1++;
	      cout<<"Enter data";
	      cin>>data;
	      arr[t1]=data;
	      break;
       case 2:t1--;
	      break;
       }
       t4=t1;
       while(t4!=-1)
       {
       cout<<arr[t4];
       t4--;
       }
       break;

case 2:cout<<"Enter or Delete";
       cin>>ch;
       switch(ch)
       {
       case 1:t2++;
	      cout<<"Enter data";
	      cin>>data;
	      arr[10+t2]=data;
	      break;
       case 2:t2--;
	      break;
       }
       t3=t2;
       while(t3!=-1)
       {
       cout<<arr[10+t3];
       t3--;
       }
       break;
}
cout<<"Continue?";
cin>>y;
}
while(y==1);
}
