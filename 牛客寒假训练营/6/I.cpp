//#include<bits/stdc++.h>
#include<iostream>
#define endl "\n"

using namespace std;

char a[21] = { ' ' }, b[21] = { ' ' };
int ans[21] = { 0 };

void fread(int& n1, int& n2) {
	getchar();
	char c = getchar();
	int i = 1;
	while (c != '\n') {
		a[i++] = c;
		c = getchar();
	}
	n1 = i;
	i = 1, c = getchar();
	while (c != '\n') {
		b[i++] = c;
		c = getchar();
	}
	n2 = i;
}

int  add(int k, int n1, int n2) {
	int i = n1-1, j = n2-1, m = 0, tmp = 0;
	while (a[i] != ' ' && b[j] != ' ') {
		ans[m++] =int( a[i--]-'0') +int( b[j--]-'0') + tmp;
		tmp = 0;
		while (ans[m - 1] >= k) {
			tmp++;
			ans[m - 1] -=k;
		}
	}
	if (a[i] == ' ' && b[j] == ' ') {
		if (tmp != 0)
		{
			ans[m++] = tmp;
		}
	}
	else if (a[i] == ' ') {
		b[j] += tmp;
		while (b[j] != '\n') {
			ans[m++] = b[j--];
		}
	}
	else {
		a[i] += tmp;
		while (a[i] != '\n') {
			ans[m++] = a[i--];
		}
	}
	return m;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0), cout.tie(0);
	int k, n1, n2;
	cin >> k;
	fread(n1, n2);
	for (int i = add(k, n1, n2) - 1; i >= 0; --i) {
		cout << ans[i];
	}

}