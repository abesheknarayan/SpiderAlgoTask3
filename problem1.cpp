#include<bits/stdc++.h>
using namespace std;


int main()
{
	string s;
	cin>>s;
	long int c=0;
	long int sum=0;
	
	while(s.size()>1)
	{  sum=0;
		for(int i=0;i<s.size();i++)
		{
			sum+=s[i]-48;
			
			
		}
		c++;
	 s= to_string(sum);	
	}
	cout<<c;
	return 0;
}
