#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int data,n;
    stack<int> stack1,stack2,pt;
    cout<<"Enter the number of elements";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>data;
        stack2.push(data);
    }
    while(!stack2.empty())
    {
        int temp=stack2.top();
        stack2.pop();
        while(!stack1.empty() && stack1.top()>temp)
        {
            stack2.push(stack1.top());
            stack1.pop();
        }
        stack1.push(temp);
        
    }
    for(pt=stack1;!pt.empty();pt.pop())
    cout<<pt.top();
}

