#include "stdafx.h"
#include<iostream>
#include<string>
#include<algorithm>
#include<map>
using namespace std;

int t,n,cnt=0;
int arr[12];
map<string,bool>memo;

string to_str(int x){
	int r=0;
	string out="";
	while(x!=0){
		r=x%10;
		x/=10;
		out+=r+'0';
	}
	reverse(out.begin(),out.end());
	return out;
}

void solve(int ind,int sum,int mask){
	if(ind==n){
		string temp="";
		if(sum==t){
			int pos=0;
			for(int i=0;i<n;i++){
				if(mask&(1<<i)){
					if(pos++)temp+="+";
					temp+=to_str(arr[i]);
				}
			}
			if(!memo[temp]){
				cnt++;
				cout<<temp<<endl;
				memo[temp]=1;
			}
		}
		return;
	}
	if(sum>t)return;
	solve(ind+1,sum+arr[ind],mask|(1<<ind));
	solve(ind+1,sum,mask);
}

int main()
{
	while(cin>>t>>n){
		if(t==0&&n==0)break;
		memo.clear();
		for(int i=0;i<n;i++)cin>>arr[i];
		cnt=0;
		cout<<"Sums of "<<t<<":"<<endl;
		solve(0,0,0);
		if(cnt==0)cout<<"NONE"<<endl;
	}
	return 0;
}

