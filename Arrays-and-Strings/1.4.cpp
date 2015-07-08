#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
int i,length;
char name[100];
int countspaces=0;
printf("Enter the string");
gets(name);
name[strlen(name)]='\0';
for(i=0;i<strlen(name);i++)
{
if(name[i]==' ')
countspaces++;
}
length=strlen(name)+(2*countspaces);
name[length]='\0';
for(i=(strlen(name));i>0;i--)
{
if(name[i]==' ')
{
name[length--]='0';
name[length--]='2';
name[length--]='%';
}
else
{
name[length--]=name[i];
}
}
puts(name);
getch();
clrscr();
}
