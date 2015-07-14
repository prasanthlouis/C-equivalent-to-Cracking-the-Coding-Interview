//Basic insertion and inorder dispaly of binarysearch tree


#include <iostream>

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
int main()
{
    node * root;
    root=new node;
    root=NULL;
    int y,ch;
    do
    {
        cout<<"1)INSERT 2)Display";
        cin>>ch;
        switch(ch)
        {
            case 1:insert(root);
                    break;
            case 2:display(root);
                break;
        }
        cout<<"CONTINUE?";
        cin>>y;
    }while(y==1);
    return 0;
}

