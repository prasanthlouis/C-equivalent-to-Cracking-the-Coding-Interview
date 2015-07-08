#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int size;
main()
{
char name[100];
printf("Enter the string");
scanf("%s",name);
size=checksize(&name);
enter(&name);
}
enter(char* name)
{
int y=0;
int x=size;
char newstr[100];
char m[100];
int i=1;
int count=1;
int index=0;
char last=name[0];
newstr[0]=name[0];
while(name[i]!='\0')
{
while(last==name[i])
{
i++;
count++;
}
index++;
itoa(count,m,12);
newstr[index++]=m[0];
count=0;
last=name[i];
newstr[index]=last;

}
newstr[index]='\0';
printf("%s",newstr);
getch();
clrscr();
}






int checksize(char* name)
{
int i=1;
int count=0;
char last=name[0];
while(name[i]!='\0')
{
while(name[i]==last)
i++;
count+=2;
last=name[i];
}
}
