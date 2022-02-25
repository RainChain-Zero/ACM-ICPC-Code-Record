//AC！
#include<iostream>
#include<cstring>
using namespace std;

const int n = 10;

int vis[n + 7][n + 7] ;
int solve[n + 7][n + 7];
char map[n + 7][n + 7];

void init() {
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> map[i][j];
		}
	}
}

bool dfs(int i, int j) {
	//solve用于回溯标记dfs路径，避免了重复搜索（记忆化）
	if (solve[i][j] == 1) return true;
	if (solve[i][j] == 2) return false;
	if (vis[i][j]) return false;
	if (i<0 || i>=n || j<0 || j>=n) return true;

	vis[i][j] = 1;

	if (map[i][j] == 'L') {
		if (dfs(i, j - 1)) {
			solve[i][j] = 1;
			return true;
		}
		else
		{
			solve[i][j] = 2;
			return false;
		}
	}
	if (map[i][j] == 'R') {
		if (dfs(i, j + 1)) {
			solve[i][j] = 1;
			return true;
		}
		else
		{
			solve[i][j] = 2;
			return false;
		}
	}
	if (map[i][j] == 'U') {
		if (dfs(i - 1, j)) {
			solve[i][j] = 1;
			return true;
		}
		else
		{
			solve[i][j] = 2;
			return false;
		}
	}
	if (map[i][j] == 'D') {
		if (dfs(i + 1, j)) {
			solve[i][j] = 1;
			return true;
		}
		else
		{
			solve[i][j] = 2;
			return false;
		}
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0), cout.tie(0);
	int ans = 0;
	init();

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j)
		{
			//!注意每次清空vis
			memset(vis,0,sizeof(vis));
			if (dfs(i, j))
				++ans;
		}
	}
	cout << ans;
	return 0;
}