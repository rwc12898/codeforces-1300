#include<iostream>
#include<string>

using namespace std;

int main()
{
	int s,s1,s2,s3,s4;
	cin>>s;
	while(true)
	{
	s+=1;
	s1 = s/1000;
	s2=(s-1000*s1)/100;
	s3=(s-1000*s1 -100*s2)/10;
	s4 = s-1000*s1-100*s2-10*s3;

    if (s1 != s2 && s1 != s3 && s1!= s4 && s2 != s3 && s2 != s4 && s3 != s4)
     {
  	break;
      }
    }
    cout<<s;
return 0;
	}
