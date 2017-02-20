#include "stdafx.h"
#include<iostream>
using namespace std;

int lnth,n,tc;
int bar[1000];

int main()
{
	cin>>tc;
	while(tc--){
		cin>>lnth>>n;
		for(int i=0;i<n;i++){
			cin>>bar[i];
		}
		int m=1<<n;
		int sum=0;
		bool flag=0;
		for(int i=0;i<m;i++){
			int temp=i,ind=0;
			sum=0;
			while(temp>0){
				if((temp&1)==1){
					sum+=bar[ind];
				}
				temp>>=1;
				ind++;
			}
			if(sum==lnth){
				cout<<"YES"<<endl;
				flag=1;
				break;
			}
		}
		if(flag==0)cout<<"NO"<<endl;
	}
	return 0;
}

