#include<bits/stdc++.h>
using namespace std;
int main()
{ vector <long long> v;
   long n,m,i;
   long long sum=0;
   cin>>n>>m;
   for( i=0;i<m;i++)
   {
   	int x;
   	cin>>x;
   	v.push_back(x);
   }
   sort(v.begin(),v.end());
   int d=m-n;
   
   for(i=0;i<d;i++)
   {
   	sum+=v[i];
   }
   int min=sum;
   for(i=d;i<v.size();i++)
   {
   	if(v[i]<min)
   	{
   		min=v[i];
	   }
   }
   cout<<min;
	return 0;
}
