#include<iostream>
#include<string.h>
using namespace std;

bool graf[101][101];
int node[100];
int black[100];
int n,m,k,out;

bool chk(int x,int y){
	for(int i=0;i<y;i++){
		if(graf[x][black[i]]||graf[black[i]][x])return 0;
	}
	return 1;
}

void solve(int ind,int cnt){
	if(ind==n+1){
		if(cnt>out){
			out=cnt;
			for(int i=0;i<cnt;i++){
				node[i]=black[i];
			}
		}
		return;
	}
	if(chk(ind,cnt)){
		black[cnt]=ind;
		solve(ind+1,cnt+1);
	}
	solve(ind+1,cnt);
}

int main()
{
	cin>>m;
	while(m--){
		memset(graf,0,sizeof graf);
		cin>>n>>k;
		int x,y;
		for(int i=0;i<k;i++){
			cin>>x>>y;
			graf[x][y]=1;
			graf[y][x]=1;
		}
		out=0;
		solve(1,0);
		cout<<out<<endl;
		cout<<node[0];
		for(int i=1;i<out;i++)cout<<" "<<node[i];
		cout<<endl;
	}
	return 0;
}

