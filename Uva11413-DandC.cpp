#include "stdafx.h"
#include<iostream>
using namespace std;

int n,m,prnt,maxx;
int milk[1000];

bool solve(int x){
	int cnt=1;
	int curr=0;
	prnt=1;
	for(int i=0;i<n;i++){
		if(milk[i]>x)return 0;
		if(curr+milk[i]<=x){
			curr+=milk[i];
		}
		else{
			cnt++;
			curr=milk[i];
		}
		if(curr>prnt)prnt=curr;
	}
	if(cnt>m)return 0;
	return 1;
}

int main()
{
	while(cin>>n>>m){
		int sum=0;
		for(int i=0;i<n;i++){
			cin>>milk[i];
			sum+=milk[i];
		}
		int s=1,e=sum,mid,ret;
		maxx=sum;
		solve(89);
		while(s<=e){
			mid=(s+e)/2;
			ret=solve(mid);
			if(ret){
				if(maxx>prnt)maxx=prnt;
				e=mid-1;
			}
			else{
				s=mid+1;
			}
		}
		cout<<maxx<<endl;
	}
	return 0;
}

