#include<iostream>
#include<algorithm>
using namespace std;

int n,m;
int arr[1000];
int sum[1000000];

int main()
{
	int tc=0;
	while(cin>>n){
		tc++;
		if(n==0)break;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int cnt=0,x=0,y=-1,pre=-1,ans;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i==j)continue;
				sum[cnt++]=arr[i]+arr[j];
			}
		}
		sort(sum,sum+cnt);
		cin>>m;
		cout<<"Case "<<tc<<":"<<endl;
		for(int i=0;i<m;i++){
			cin>>x;
			for(int j=0;j<cnt;j++){
				if(sum[j]>=x){y=sum[j];break;}
				pre=sum[j];
			}
			if(y==-1)ans=pre;
			else if(pre==-1)ans=y;
			else{
				if(abs(x-y)<abs(x-pre))ans=y;
				else ans=pre;
			}
			cout<<"Closest sum to "<<x<<" is "<<ans<<"."<<endl;
		}
	}
	return 0;
}

