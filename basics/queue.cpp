#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int n,i,data;
	queue<int> qu;
	cout<<"Enter the no of elements";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>data;
		qu.push(data);
		
	}
	while(!qu.empty())
	{
		
		cout<<qu.front();
		qu.pop();
	}
}
