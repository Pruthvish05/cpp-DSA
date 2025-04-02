#include<iostream>
using namespace std;
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
//Another one
#include<iostream>
using namespace std;
int n;
	cout<<"Enter num";
	cin>>n;
    char ch='A';
	for(int i=65; i<(65+n); i++) {
		for(char j='A'; j<'A'+n; j++) {
		
			cout<<ch<<" ";
			ch++;
		}
		cout<<endl;
	}
}
//another one
 //Heavy doubt boss.
    int n;
    cout<<"enter the n";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<n-1;j++)
        {
                cout<<(i+1);
        }
        cout<<endl;
    }
