//AC!
#include<iostream>
#include<cstring>
using namespace std;

//两个数组用来表示上下左右四个方向（可以用for替代四个dfs）
int x[4]={0,0,-1,1};
int y[4]={1,-1,0,0};
bool vis[7][7]={false};
long long ans=0;

void dfs(int X,int Y){
	//裁剪到边界处就停止
	if(X==0||X==6||Y==0||Y==6)
	{
		++ans;
		return ;
	}
	//四个方向dfs
	for(int i=0;i<4;++i)
	{
		X+=x[i],Y+=y[i];
		if(!vis[X][Y])
		{
			//6-X是因为保证形状相同，关于中心对称，相应对称点也不能访问了
			vis[X][Y]=vis[6-X][6-Y]=true;
			dfs(X,Y);
			//回溯时，下面这句话会将vis重置，且只重置了修改了的值，效率比最后全部重置要高
			vis[X][Y]=vis[6-X][6-Y]=false;
		}
		//将方向返回出发点如果写成四个dfs则不必
		X-=x[i],Y-=y[i];
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0), cout.tie(0);
	//一定要给起始位置打上标记！
	vis[3][3]=true;
	dfs(3,3);
	//旋转对称为同一种分割法，所以四个方向除四
	cout<<ans/4;
	return 0;
}

//本题中，要保证裁剪的形状不变，则裁剪线必须经过中心，所以从中心处开始DFS即可
//http://oj.ecustacm.cn/problem.php?id=1320