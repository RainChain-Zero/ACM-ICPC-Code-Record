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
    cin>>N;
    int n=int(log(N)/log(2));
    //min
    int min=pow(2,n-1)-1;
    int modify=N-(min*2+1)-(min+1);
    modify=modify<=0?0:modify;
    min+=modify;
    int left=N-int(pow(2,n)-1)-2*modify;
    //max
    int max=min+left/2;
    cout<<min<<endl<<max;
	return 0;
}