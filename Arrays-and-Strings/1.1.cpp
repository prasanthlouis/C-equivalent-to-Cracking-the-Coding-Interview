#include <iostream>
#include<string.h>

using namespace std;
void unique(char&);
int main()
{
int i,x;
char name[255];
  int arr[100]={0};
  cout<<"Enter string";
  cin>>name;
  if(strlen(name)>256)
  cout<<"False";
  else
  {
    for(i=0;i<strlen(name);i++)
    {
        x=name[i];
        if(arr[x]==1)
        {
        cout<<"False";
        break;
        }
        else
        arr[x]=1;
    }
    if(i==(strlen(name)))
    cout<<"True";
  }
}
