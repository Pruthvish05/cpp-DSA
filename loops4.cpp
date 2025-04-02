#include<iostream>
using namespace std;
int n;
    cout<<"Enter n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    //another one
    int n;
    cout<<"enter n";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
//one more
 int n;
    cout<<"enter n";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    int n;
    cout<<"enter n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j>=0;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
