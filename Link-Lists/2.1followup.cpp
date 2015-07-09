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
    node * tempy;
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
  tempy=cond;
  cond=root->next;
  while(root->x!='0')
  {
     while(cond->x!='0')
     {
         if(root->x==cond->x)
         {
             root1->next=cond->next;
             break;
         }
         cond=cond->next;
         root1=root1->next;
     }
     root=root->next;
     root1=root;
     cond=root->next;
     
   }
   cond=tempy;
   while(cond->x!='0')
   {
       cout<<cond->x;
       cond=cond->next;
   }
 
}


