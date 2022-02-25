//#include<bits/stdc++.h>
#include<iostream>

#define endl "\n"

#pragma GCC optimize(1)
#pragma GCC optimize(2)
#pragma GCC optimize(3)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);cin.tie(0),cout.tie(0);
	int T,res1,res2,res3;
	long R1,R2,R3,V1,V2,V3,N;

	cout<<1;
	cin>>T;
	while(T--)
	{
		cin>>R1>>R2>>R3;
		cin>>V1>>V2>>V3;
		cin>>N;
		res1=V1*N%360,res2=V2*N%360,res3=V3*N%360;
		
		cout<<((res1-res2)%180==0 &&(res1-res3)%180==0 &&(res2-res3)%180==0?"TRUE":"FALSE");
		if(T>=1)
			cout<<endl;
	}
	return 0;
}