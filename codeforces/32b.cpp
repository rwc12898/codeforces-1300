#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s,o;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='.')
	    {
	    	o+= '0';
	    }
	    if(s[i]=='-' && s[i+1]=='.')
	    {
	    	o+= '1';
	    	++i;
	    }
	    if(s[i]=='-' &&s[i+1]=='-')
	    {
	    	o+= '2';
	    	++i;
	    }
    }
	cout<<o;
	return 0;    
	
}