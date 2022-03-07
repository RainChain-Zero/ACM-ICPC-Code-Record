//AC!
//http://oj.ecustacm.cn/problem.php?id=1321
#include<bits/stdc++.h>

#define endl "\n"

using namespace std;

string s;

int pos=0;

int dfs(int n){
	int tmp=0,ans=0;
	while(pos<n){
		if(s[pos]=='('){
			pos++;
			tmp+=dfs(n);
		}
		else if(s[pos]==')'){
			pos++;
			break;
		}
		else if(s[pos]=='|'){
			pos++;
			ans=max(ans,tmp);
			//要把tmp清空
			tmp=0;
		}
		else{
			pos++;
			tmp++;
		}
	}
	ans=max(ans,tmp);
	return ans;
}

int main()
{
	ios::sync_with_stdio(0);cin.tie(0),cout.tie(0);

	cin>>s;

	cout<<dfs(s.size());


}