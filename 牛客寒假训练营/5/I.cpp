#include<bits/stdc++.h>
#define endl "\n"

#pragma GCC optimize(1)
#pragma GCC optimize(2)
#pragma GCC optimize(3)

using namespace std;

long diff[1000007]={0};

void init(long n){
	long t,tmp=0,j=0;
	for(long i=0;i<n;++i)
	{
		cin>>t;
		if(i>=1){
			diff[j++]=t-tmp;
		}
		tmp=t;
	}
}

long binary_search(long* v,long start,long end,long k){
	while(start<end){
		long middle=(start+end)/2;
		if(v[middle]>k)
			end=middle-1;
		else if(v[middle]<k)
			start=middle+1;
		else
			return middle;
	}
	return end;
}

long sum(long* v,long start,long end,long k){
	long sum=0;
	for(int i=start;i<=end;++i)
	{
		sum+=v[i]-k;
	}
	return sum;
}

int main()
{
	ios::sync_with_stdio(0); cin.tie(0), cout.tie(0);

	long n,q,k,p;
	cin>>n>>q;
	init(n);
	sort(diff,diff+n-1);

	while(q--)
	{
		cin>>k>>p;
		long idx=binary_search(diff,0,n-2,k);
		if(diff[idx]<=k)
			idx++;
		cout<<(sum(diff,idx,n-2,k)<p?"No":"Yes");
		if(q>=1)
			cout<<endl;
	}
	return 0;
}

