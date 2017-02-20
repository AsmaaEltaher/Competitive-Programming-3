#include "stdafx.h"
#include<iostream>
#include<algorithm>
using namespace std;

int n,m;
int dra[20000];
int kng[20000];

int main()
{
	while(cin>>n>>m){
		if(n==0&&m==0)break;
		for(int i=0;i<n;i++)cin>>dra[i];
		for(int i=0;i<m;i++)cin>>kng[i];

		sort(dra,dra+n);
		sort(kng,kng+m);

		int sum=0;
		int cnt=0;

		int k=0,j=0;
		while(k<n&&j<m){
			if(kng[j]>=dra[k]){
				sum+=kng[j];
				j++;
				k++;
				cnt++;
			}
			else j++;
		}
		if(cnt==n){
			cout<<sum<<endl;	
		}
		else cout<<"Loowater is doomed!"<<endl;
	}
	return 0;
}

