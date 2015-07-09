#include <iostream>

using namespace std;

struct node
{
    node *next;
    int x;
};
node * func(node *root,int y,int &i)
{
    if(root->next==0)
    {
        return NULL;
    }
    node *nd=func(root->next,y,i);
    i=i+1;
    if(i==y)
    return root;
    return nd;
}
int main()
{
    node *root,*cond;
    int data,i,y,z,j=0;
    root=new node;
    cond=root;
    cout<<"enter kth";
    cin>>y;
   cout<<"Enter the numbers";
   for(i=0;i<10;i++)
   {
       cin>>data;
       root->x=data;
       root->next=new node;
       root=root->next;
  
   }
   root->next=0;
   root=cond;
   while(root->next!=0)
   {
       cout<<root->x;
       root=root->next;
   }
   cout<<'\n';
   root=cond;
   cond=func(root,y,j);
   cout<<cond->x;
  
}





