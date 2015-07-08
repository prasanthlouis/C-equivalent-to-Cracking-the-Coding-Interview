#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
int flag=0;
char name1[10],name2[10],i,j,temp;
printf("Enter the string");
scanf("%s",name1);
printf("Enter the string2");
scanf("%s",name2);
for(i=0;i<strlen(name1);i++)
for(j=0;j<strlen(name1);j++)
{
if(name1[i]<name1[j])
{
temp=name1[i];
name1[i]=name1[j];
name1[j]=temp;
}}

for(i=0;i<strlen(name2);i++)
for(j=0;j<strlen(name2);j++)
{
if(name2[i]<name2[j])
{
temp=name2[i];
name2[i]=name2[j];
name2[j]=temp;
}}
for(i=0;i<strlen(name1);i++)
{
if(name1[i]!=name2[i])
{
printf("NOPE");
flag=1;
break;
}
}
if(flag==0)
printf("YES");
getch();
}
