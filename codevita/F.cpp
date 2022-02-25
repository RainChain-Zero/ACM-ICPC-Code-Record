//#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

#define endl "\n"

#pragma GCC optimize(1)
#pragma GCC optimize(2)
#pragma GCC optimize(3)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);cin.tie(0),cout.tie(0);
	int N;
    double P;
    long M;
    cin>>N>>M>>P;
    P*=0.01;
    double ans=M*pow(P,N-1);
    ans+=ans-int(ans)<0.5?0:1;
    cout<<int(ans);
	return 0;
}