#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream.h>
int main()
{
char name1[20]="prasanth",name2[20]="louis",name3[20];
strcat(name1,name2);
cout<<name1;
getch();
return 0;
}

rotate(name1,name2)
{
int len=strlen(name1);
if(len==strlen(name2) && len>0)
{
strcat(name1,name1);
issubstring(name1,name2);
}
return 0;
}
