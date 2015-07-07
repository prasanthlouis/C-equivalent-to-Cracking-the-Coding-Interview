#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i;
   vector<int> intarr(10);
   for(i=0;i<10;i++)
   intarr[i]=i;
   
   for(i=0;i<10;i++)
   cout<<intarr[i];
   
   return 0;
}
