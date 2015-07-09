#include <iostream>

using namespace std;

struct node
{
    node *next;
    int x;
};
int func(node *root,int y)
{
    if(root->next==0)
    {
        return 0;
    }
    else
    {
    int i=func(root->next,y)+1;
    if(i==y)
    cout<< root->x;
    }
}
int main()
{
    node *root,*cond;
    int data,i,y,z;
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
   z=func(root,y);
   
  
}




