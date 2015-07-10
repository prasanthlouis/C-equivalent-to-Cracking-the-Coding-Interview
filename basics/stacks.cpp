#include<iostream>
#include<stack>
using namespace std;
int main()
{
int n,i,data;
stack<int> st;
cout<<"Enter the number of element";
cin>>n;
cout<<"Enter the elements";
for(i=0;i<n;i++)
{
cin>>data;
st.push(data);
}
while(!st.empty())
{
cout<<st.top();
st.pop();
}
}
