#include "stdafx.h"
#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int arr[10][25];
int arr2[20];
int arr3[20];
int prnt[20];
int n,m,v,t,x;

int main()
{
	int tc=0;
	while(cin>>n>>v){
		if(n==0 && v==0)break;
		//if(tc)cout<<endl;
		tc++;
		memset(arr,0,sizeof arr);
		for(int i=0;i<n;i++){
			cin>>arr2[i];
		}
		cin>>m;
		for(int i=0;i<m;i++){
			cin>>t;
			arr[i][0]=t;
			for(int j=1;j<=t+1;j++){
				cin>>arr[i][j];
			}
		}
		int out, curr=0;
		int pop=0;
		int s=1<<n;
		for(int i=1;i<s;i++){
			int temp=i;
			int cnt=0;
			int pos=0;
			while(temp>0){
				if((temp&1)==1){
					arr3[cnt]=pos;
					cnt++;
				}
				temp>>=1;
				pos++;
			}
			if(cnt!=v)continue;
			int sum=0;
			curr=i;
			for(int j=0;j<v;j++){
				sum+=arr2[arr3[j]];
			}
			for(int i=0;i<m;i++){
				t=arr[i][0];
				int chk=0;
				for(int j=1;j<=t;j++){
					for(int u=0;u<v;u++){
						if(arr3[u]==arr[i][j]-1){
							chk++;
							break;
						}
					}
				}
				if(chk>1)sum-=arr[i][t+1]*(chk-1);
			}
			if(sum>pop){
				pop=sum;
				out=curr;
			}
			else if(sum==pop){
				int tmp=out,ind=0,xx=0;
				while(tmp>0){
					if(tmp&1==1){
						if(ind>arr3[xx++]){
							out=curr;
							break;
						}
					}
					tmp>>=1;
					ind++;
				}
			}
		}
		//cout<<pop<<" "<<out<<endl;
		cout<<"Case Number  "<<tc<<endl;
		cout<<"Number of Customers: "<<pop<<endl;
		cout<<"Locations recommended: ";		int temp=out,pos=0;		bool f=0;		while(temp>0){
			if((temp&1)==1){
				if(f)cout<<" ";
				cout<<pos+1;
				f=1;
			}
			temp>>=1;
			pos++;
		}		cout<<endl<<endl;
	}
	return 0;
}

