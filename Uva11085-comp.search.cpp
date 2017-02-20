#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;

int grid[8];
int curr[8];
int out,cnt=0;

bool place(int r,int c){
	for(int i=0;i<c;i++){
		if(curr[i]==r || abs(r-curr[i])==abs(c-i))
			return 0;
	}
	return 1;
}

void solve(int ind){
	if(ind==8){
		int sum=0;
		for(int i=0;i<8;i++){
			if(curr[i]!=grid[i])sum++;
		}
		if(sum<out)out=sum;
		return;
	}
	for(int i=0;i<8;i++){
		if(place(i,ind)){
			curr[ind]=i;
			solve(ind+1);
		}
	}
}


int main()
{
	while(cin>>grid[0]>>grid[1]>>grid[2]>>grid[3]>>grid[4]>>grid[5]>>grid[6]>>grid[7]){
		memset(curr,0,sizeof curr);
		cnt++;
		out=100000;
		for(int i=0;i<8;i++)grid[i]--;
		solve(0);
		cout<<"Case "<<cnt<<": "<<out<<endl;
	}
	return 0;
}

