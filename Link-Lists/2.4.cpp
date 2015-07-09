#include <iostream>

using namespace std;

struct node
{
    node* next;
    int x;
    
};
int main()
{
    int i,data,point;
    node *root,*cond,*bf,*af,*newnd,*cf;
    root=new node;
    af=new node;
    bf=new node;
    bf->next=0;
    af->next=0;
    
    cond=root;
    cout<<"Enter the nodes";
    for(i=0;i<10;i++)
    {
        cin>>data;
        root->x=data;
        root->next=new node;
        root=root->next;
    }
    cout<<"Enter the point";
    cin>>point;
    root->next=0;
    root=cond;
    for(i=0;i<10;i++)
    {
     if(root->x<point)
     {
      newnd=new node;   
      newnd->next=bf;
      newnd->x=root->x;
      bf=newnd;
     }
     else
     {
         newnd=new node;
         newnd->next=af;
         newnd->x=root->x;
         af=newnd;
     }
     root=root->next;
    }
    cf=bf;
    while(bf->next->next!=0)
    {
        bf=bf->next;
    }
    bf->next=af;
    bf=cf;
    while(bf->next!=0)
    {
        cout<<bf->x;
        bf=bf->next;
    }
}
