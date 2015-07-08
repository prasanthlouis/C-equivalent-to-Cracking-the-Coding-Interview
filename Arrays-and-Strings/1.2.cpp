#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream.h>
void reverse(char*);
int main()
{
char name[100];
cout<<"Enter the string";
cin>>name;
reverse(name);
}
void reverse(char* st)
{
char temp;
int i;
int x=strlen(st);
x--;
int c=x;
for(i=0;i<=c/2;i++)
{
temp=*(st+i);
*(st+i)=*(st+x);
*(st+x)=temp;
x--;
}
cout<<st;
getch();
}


