#include <iostream>
#include<stack>
using namespace std;
class stacky
{
public: stack<int> st;	
        //void popy(stacky &);
};
stacky origin,buffer,destination;
void popy(stacky &origin, stacky &destination)
{
    	stack<int> dt;
    	
	int x=origin.st.top();
	destination.st.push(x);
	origin.st.pop();
	
}
void moveto(int n,stacky &origin, stacky &destination, stacky &buffer)
{
	if(n>0)
	{
	moveto(n-1,origin,buffer,destination);
	popy(origin,destination);
	moveto(n-1,buffer,destination,origin);
	}
}

int main() {
	int n,i;
stack<int> dt;
	cout<<"Enter the number of rings";
	cin>>n;
	for(i=n-1;i>=0;i--)
		origin.st.push(i);
	moveto(n,origin,destination,buffer);
    	for(dt=destination.st;!dt.empty();dt.pop())
	cout<<dt.top();
	return 0;
}
