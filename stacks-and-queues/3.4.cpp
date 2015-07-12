#include<iostream>
#include<stack>
using namespace std;
class stacks
{
public: stack<int> st;  
        void moveto(int,stacks,stacks,stacks);
        void poptop(stacks,stacks);
};
void stacks:: poptop(stacks origin,stacks destination)
{
    stack<int> dt;
    int x=origin.st.top();
    destination.st.push(x);
    for(dt=destination.st;!dt.empty();dt.pop())
    cout<<dt.top();
    origin.st.pop();
    
}
void stacks:: moveto(int n,stacks origin,stacks destination,stacks buffer)
{
    if(n>=1)
    {
    moveto(n-1,origin,buffer,destination);
    poptop(origin,destination);
    buffer.moveto(n-1,origin,destination,buffer);
    }
        
    }
int main()
{
   int i;
   stack<int> dt;
   stacks origin,buffer,destination;
   for(i=1;i>=0;i--)
   origin.st.push(i);
   for(dt=origin.st;!dt.empty();dt.pop())
   cout<<dt.top();
   origin.moveto(2,origin,destination,buffer);
   for(dt=destination.st;!dt.empty();dt.pop())
   cout<<dt.top();
}  
   

