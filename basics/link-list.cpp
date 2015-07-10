//This is no way near efficient. Just playing around


/*Coming back to this I feel like laughing. Use for loops for entering data.
 for (i=0;i<10;i++){
  cond->x=data;
  cond->next=new node;
  cond=cond->next;
}
cond->x=NULL;
*/

#include <iostream>
#include<stdio.h>
using namespace std;
struct node
{
    node *next;
    int x;
};
int main()
{
    node* conductor;
    node * root;
    node * root1;
   conductor=new node;
   root=conductor;
   root1=conductor;
   conductor->x=23;
   conductor->next=new node;
   conductor=conductor->next;
   conductor->x=43;
   conductor->next=new node;
   conductor=conductor->next;
   conductor->x=53;
   conductor->next=0;
   while(root->next!=0)
   {
   cout<<root->x;
   root=root->next;
   }
   cout<<root->x;
  root=root1;
  conductor=root1;
  conductor=conductor->next;
  root->next=conductor->next;
  while(root->next!=0)
  {
      cout<<root->x;
      root=root->next;
  }
  cout<<root->x;
}

