#include<bits/stdc++.h>

#define endl "\n"

#pragma GCC optimize(1)
#pragma GCC optimize(2)
#pragma GCC optimize(3)

using namespace std;

int gcd(int a,int b){
	return a%b==0?b:gcd(b,a%b);
}

int lcm(int a,int b){
	return a*b/gcd(a,b);
}

int main()
{
	ios::sync_with_stdio(0);cin.tie(0),cout.tie(0);
	int a,b,c;
	cin>>a>>b>>c;
	cout<<lcm(lcm(a,b),c);
	return 0;
}

