#include <iostream>

using namespace std;
struct node
{
    node* next;
    int x;
};
node * addlists(node * poly1,node *poly2, int y)
{
   node * poly3;
   node *poly4;
   poly3=new node;
   if(poly1==NULL && poly2==NULL && y==0)
   return NULL;
   int value=y;
   if(poly1!=NULL)
   value+=poly1->x;
   if(poly2!=NULL)
   value+=poly2->x;
   poly3->x=value%10;
   
 
   if(poly1!=NULL || poly2!=NULL)
   {
      poly4=addlists(poly1==NULL?NULL:poly1->next,
                poly2==NULL?NULL:poly2->next,
                value>=10?1:0);
   
       poly3->next=poly4;
    
   }
    return poly3;
}
int main()
{
    int carry=0,i;
    node * poly1,*poly2,*co1,*co2,*poly3,*poly4;
    poly1=new node;
    poly2=new node;
    poly3=new node;
    poly4=poly3;
    int n1,n2,data;
   cout<<"Enter the number of numbers";
   cin>>n1;
   cout<<"Etner the second number";
   cin>>n2;
   co1=poly1;
   co2=poly2;
   for(i=0;i<n1;i++)
   {
       cin>>data;
       poly1->x=data;
       poly1->next=new node;
       poly1=poly1->next;
       
   }
    for(i=0;i<n2;i++)
   {
       cin>>data;
       poly2->x=data;
       poly2->next=new node;
       poly2=poly2->next;
       
   }
   poly1=NULL;
   poly2=NULL;
   poly1=co1;
   poly2=co2;
  poly3=addlists(poly1,poly2,carry);
  while(poly3!=NULL)
  {
  cout<<poly3->x;
  poly3=poly3->next;
  }
  
  
}



