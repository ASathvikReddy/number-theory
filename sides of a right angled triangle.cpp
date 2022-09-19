#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll a;
	cin>>a;
	ll cnt=0;
	for(int i=1;i*i<=a*a;i++)
	{
		if(a%i==0)
		{
			if(a/i!=i and i%2==(a/i)%2)
			{
				cnt++;
			}
		}
	}
	cout<<cnt;
}
