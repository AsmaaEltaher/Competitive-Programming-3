#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n;
int bags[10000];
vector<vector<int>>cary;
vector<int>empty;

int main()
{
	int t=0;
	while(cin>>n){
		if(t++)cout<<endl;
		if(n==0)break;
		cary.clear();
		int cnt=1,mx=0;
		for(int i=0;i<n;i++){
			cin>>bags[i];
			cary.push_back(empty);
		}
		sort(bags,bags+n);
		int i=0,j=0;
		for(int i=1;i<n;i++){
			if(bags[i]==bags[i-1]){
				cnt++;
			}
			else{
				if(cnt>mx)mx=cnt;
				cnt=1;
			}
		}
		if(cnt>mx)mx=cnt;

		for(i=0;i<n;i++){
			if(j==mx)j=0;
			cary[j++].push_back(bags[i]);
		}


		cout<<mx<<endl;
		for(i=0;i<mx;i++){
			cout<<cary[i][0];
			for(j=1;j<cary[i].size();j++){
				cout<<" "<<cary[i][j];
			}
			cout<<endl;
		}
	}
	return 0;
}

