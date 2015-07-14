#include <iostream>
#include<math.h>
using namespace std;
struct node
{
    node *left,*right;
    int x;
};

void insert(node *&root)
{
    int data;
    cout<<"Enter data";
    cin>>data;
    node *nd;
    nd=new node;
    nd->x=data;
    nd->left=NULL;
    nd->right=NULL;
    if(root==NULL)
    {
        root=nd;
        return;
    }
    else
    {
        node *parent,*parentcopy;
        parent=root;
        while(parent!=NULL)
        {
            parentcopy=parent;
            if(nd->x>parent->x)
            parent=parent->right;
            else
            parent=parent->left;
            
            
        }
        if(nd->x>parentcopy->x)
        parentcopy->right=nd;
        else
        parentcopy->left=nd;
    }
    
    
}
void display(node *root)
{
    if(root!=NULL)
    {
    display(root->left);
    cout<<root->x;
    display(root->right);
    }
        
}
int balance(node *root)
{
    if(root==NULL)
    return 0;
    int leftheight=balance(root->left);
    if(leftheight==-1)
    return -1;
    int rightheight=balance(root->right);
    if(rightheight==-1)
    return -1;
    
    int height=abs(rightheight-leftheight);
    if(height>1)
    return -1;
    else
    return max(rightheight,leftheight)+1;
}
int main()
{
    node * root;
    root=new node;
    root=NULL;
    int y,ch;
    do
    {
        cout<<"1)INSERT 2)Display 3)Balanced";
        cin>>ch;
        switch(ch)
        {
            case 1:insert(root);
                    break;
            case 2:display(root);
                break;
            case 3:int check=balance(root);
                   if(check==-1)
                   cout<<"UNBALANCED";
                   else
                   cout<<"BALANCED";
                break;
        }
        cout<<"CONTINUE?";
        cin>>y;
    }while(y==1);
    return 0;
}
