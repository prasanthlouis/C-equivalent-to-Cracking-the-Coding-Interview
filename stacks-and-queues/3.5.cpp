#include<iostream>
#include<stack>
using namespace std;
void switchstack(stack<int> &oldstack,stack<int> &newstack)
{
    if(oldstack.empty())
    {
        while(!newstack.empty())
        {
        oldstack.push(newstack.top());
        newstack.pop();
        }
    }
}
void push(stack<int> &newstack,int data)
{
    newstack.push(data);
}
void pop(stack<int> &oldstack,stack<int> &newstack)
{
    switchstack(oldstack,newstack);
    oldstack.pop();
}
void peek(stack<int> &oldstack,stack<int> &newstack)
{
    switchstack(oldstack,newstack);
    cout<<oldstack.top();
}
int main()
{
    int y,ch,data;
    stack<int> newstack,oldstack;
    do
    {
        cout<<"MENU 1.PUSH 2.POP 3.PEEK";
        cin>>ch;
        switch(ch)
        {
            case 1: cout<<"Enter data";
                    cin>>data;
                    push(newstack,data);
                    break;
            case 2:pop(oldstack,newstack);
                break;
            case 3:peek(oldstack,newstack);
                break;
        }
        cout<<"CONTINUE";
        cin>>y;
    }while(y==1);
    
    return 0;
    }
    
