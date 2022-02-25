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
	int n;
    char a1,a2;
    char d1,d2;
    cin>>n;
    cin>>a1>>a2;
    cin>>d1>>d2;
    long long ans=n*(a2-a1+1)*(a2-a1+1)*(d2-d1+1)*(d2-d1+1)*(d2-d1+1)*(d2-d1+1);
    cout<<ans;
	return 0;
}