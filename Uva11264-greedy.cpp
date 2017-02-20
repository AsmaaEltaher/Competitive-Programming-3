#include "stdafx.h"
#include<iostream>
#include<cstring>
using namespace std;

int n;
int coin[1000];

int main()
{
	int t;
	cin>>t;
	while(t--){
		memset(coin,0,sizeof coin);
		cin>>n;
		for(int i=0;i<n;i++)cin>>coin[i];
		int sum=1;
		int cnt=1;
		for(int i=1;i<n;i++){
			if(sum+coin[i]<coin[i+1]){
				sum+=coin[i];
				cnt++;
			}
		}
		cnt++;
		cout<<cnt<<endl;
	}
	return 0;
}

