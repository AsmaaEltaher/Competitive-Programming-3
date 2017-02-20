#include "stdafx.h"
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int m;
string arr[100];
int thr[10000][2];
int one[10000][2];

int main()
{
	while(cin>>m){
		int curr=0;
		int min=1000000;
		int t=0,n=0;
		for(int i=0;i<m;i++){
			cin>>arr[i];
			for(int j=0;j<m;j++){
				if(arr[i][j]=='3'){
					thr[t][0]=i;
					thr[t++][1]=j;
				}
				if(arr[i][j]=='1'){
					one[n][0]=i;
					one[n++][1]=j;
				}
			}
		}
		int maxx=0;
		for(int i=0;i<n;i++){
			min=1000000;
			for(int j=0;j<t;j++){
				curr=abs(thr[j][0]-one[i][0])+abs(thr[j][1]-one[i][1]);
				//cout<<thr[j][0]<<" "<<thr[j][1]<<"-"<<one[i][0]<<" "<<one[i][1]<<"="<<curr<<endl;
				if(curr<min)min=curr;
			}
			if(min>maxx)maxx=min;
		}
		cout<<maxx<<endl;

	}
	return 0;
}

