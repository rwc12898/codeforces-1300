#include<iostream>
using namespace std;

int main()
{   int n, x[10][10];
	cout<<"Enter a number:";
	cin>>n;

    for(int i=0; i<n; i++)
    {
    	for(int j=0; j<n; j++)

    		cin>>x[i][j];
    }

    for(int i=0; i<n; i++)
    {
    	for(int j=0; j<n; j++)

    		cout<<x[i][j];
    }
}