#include<bits/stdc++.h>
#include<iostream>
#define endl "\n"

#pragma GCC optimize(1)
#pragma GCC optimize(2)
#pragma GCC optimize(3)

using namespace std;

int l[50007]={0};
long long ans=0;

void init(int n){
	for(int i=1;i<=n;++i)
	{
		cin>>l[i];
	}
}

int main()
{
	ios::sync_with_stdio(0); cin.tie(0), cout.tie(0);

	int n,minV,maxV;
	cin>>n;
	init(n);
	for(int i=1;i<=n;++i)
	{
		minV=maxV=l[i];
		for(int j=i;j<=n;++j)
		{
			minV=min(minV,l[j]),maxV=max(maxV,l[j]);
			if(maxV-minV==j-i)
				ans++;
		}
	}
	cout<<ans;

	return 0;
}

