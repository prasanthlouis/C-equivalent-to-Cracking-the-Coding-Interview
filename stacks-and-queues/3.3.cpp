#include <iostream>
#include<stack>
using namespace std;
int top=1;
int i=-1;
class stacky
{
    public: void pushy(int);
            void popy();
};
stack<int> arr[10];

void stacky::popy()
{ 
    int x;
    stack<int> st;
    st=arr[i];
    x=st.top();
    cout<<x;
    st.pop();
    arr[i]=st;
    if(st.empty())
    i--;
    
}
void stacky::pushy(int v)
{
    stack<int> st;
    st=arr[i];
    if(st.size()==2)
    {
    stack<int> st;
    st.push(v);
    arr[++i]=st;
    }
    else
    {
    st=arr[i];
    st.push(v);
    arr[i]=st;
    }
}

int main() {
    stacky stamp;
	int ch,y,data;
	stack<int> st;
	arr[++i]=st;
	do{
		cout<<"1.PUSH 2.POP";
		cin>>ch;
		switch(ch)
		{
			case 1: cin>>data;
					stamp.pushy(data);
					break;
			case 2:stamp.popy();
			        break;
			
			case 3:stack<int> st;
				   for(st=arr[i];!st.empty();st.pop())
				   cout<<st.top();
				   break;
		}
		cout<<"CONTINUE?";
		cin>>y;
	}while(y==1);
	return 0;
}
