#include<stdio.h>
#include<conio.h>
main()
{
int n,i,j,a[30][30],row[20],col[20];
printf("Enter the order");
scanf("%d",&n);
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(a[i][j]==0)
{
row[i]=1;
col[j]=1;
}
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(row[i]==1 || col[j]==1)
a[i][j]=0;
for(i=0;i<n;i++)
for(j=0;j<n;j++)
printf("%d",a[i][j]);
}
