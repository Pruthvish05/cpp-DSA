#include<iostream>
using namespace std;
int main() //{
	int n;
	cout<<"Enter the number of lines and shit:"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	    for(int j=1;j<=n;j++)
	    {
	        cout<<j;
	    }
	    cout<<"\n";
	}
	int n;
	cout<<"Enter num";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	    for(char ch=65;ch<=(64+n);ch++)
	    {
	        cout<<ch<<" ";
	    }
	    cout<<"\n";
	}
