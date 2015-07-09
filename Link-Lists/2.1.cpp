#include <iostream>
#include <string.h>
using namespace std;
struct node
{
    node* next;
    char x;
};
int main()
{
    int n,flag=0;
    int temp[256]={0};
    char name[20];
    node * root;
    node * cond;
    node * root1;
  cout<<"enter text";
  cin>>name;
  n=strlen(name);
  root=new node;
  cond=root;
  for(int i=0;i<n;i++)
  {
      root->x=name[i];
      root->next=new node;
      root=root->next;
  }
  root->x='0';
  root=cond;
  while(root->x!='0')
  {
      cout<<root->x;
      root=root->next;
  }
  root=cond;
  root1=cond;
  while(root->x!='0')
  {
      int y=root->x;
      if(temp[y]==0)
      {
          cout<<root->x;
          temp[y]=1;
      }
      else
      {
        cond->next=root->next;
        
      }
      root=root->next;
      if(flag==1)
      cond=cond->next;
      flag=1;
  }
  cond=root1;
}


