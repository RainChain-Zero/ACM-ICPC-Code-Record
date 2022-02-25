#include<bits/stdc++.h>

#pragma GCC optimize(1)
#pragma GCC optimize(2)
#pragma GCC optimize(3)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);cin.tie(0),cout.tie(0);
	int A1,A2,B1,B2,D1,D2,E1,E2;
	long C1,C2;
	long long p1,p2;
	cin>>A1>>B1>>C1>>D1>>E1>>A2>>B2>>C2>>D2>>E2;
	p1=D1*A1*B1+C1+E1;
	p2=D2*A2*B1+C2+E2;
	cout<<(p1>p2?"diesel":"petrol");
	return 0;
}