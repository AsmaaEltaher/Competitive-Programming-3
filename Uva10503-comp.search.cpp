#include<iostream>
using namespace std;

int n,m,x,y,z,k,cnt;
int dom[14][2];

void solve(int pre,int ind,int mask){
	if(ind==n){
		if(pre==z)cnt++;
		return;
	}
	for(int i=0;i<m;i++){
		if(mask&(1<<i))continue;
		if(dom[i][0]==pre){
			solve(dom[i][1],ind+1,mask|(1<<i));
		}
		if(dom[i][1]==pre){
			solve(dom[i][0],ind+1,mask|(1<<i));
		}
	}
	return;
}

int main()
{
	while(cin>>n){
		if(n==0)break;
		cin>>m>>x>>y>>z>>k;
		for(int i=0;i<m;i++)cin>>dom[i][0]>>dom[i][1];
		cnt=0;
		solve(y,0,0);
		if(cnt>0)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}

