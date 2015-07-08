#include<stdio.h>
#include<iostream.h>
#include<conio.h>
main()
{
int n;
int a[20][20];
int i,j;
cout<<"Order of matrix";
cin>>n;
cout<<"Enter the matrix";
for(i=0;i<n;i++)
for(j=0;j<n;j++)
cin>>a[i][j];
for(i=0;i<n;i++)
{
cout<<'\n';
for(j=0;j<n;j++)
cout<<a[i][j]<<' ';
}
int temp;
int first=0;
int last=n-1;
int offset=0;
for(j=0;j<n/2;j++)
{
for(i=first;i<last;i++)
{
temp=a[first][i];
a[first][i]=a[last-offset][first];
a[last-offset][first]=a[last][last-offset];
a[last][last-offset]=a[first+offset][last];
a[first+offset][last]=temp;
offset++;
}
first++;
last--;
offset=0;
}
cout<<'\n';
for(i=0;i<n;i++)
{
cout<<'\n';
for(j=0;j<n;j++)
cout<<a[i][j]<<' ';
}
getch();
clrscr();
}
