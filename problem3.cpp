#include<bits/stdc++.h>
using namespace std;
int  isprime(long n)
{
	int root=sqrt(n);
	for(int i=2;i<=root;i++)
	{
		if(n%i==0)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	long n;
	long sum=1;
	long c=1;
	cin>>n;
	for(int i=3;i<=n;i++)
	{
		int p=isprime(i);
		
		if(p==0)
		{ c++;
			sum+=c;
		}
	}
	cout<<sum;

return 0;
	
}
