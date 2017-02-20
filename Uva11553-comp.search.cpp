#include<iostream>
#include<algorithm>
using namespace std;

int grid[8][8];
int row[8];
int n;

int main()
{
	int tc;
	cin>>tc;
	while(tc--){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>grid[i][j];
		}
		row[i]=i;
	}
	int out=0,prnt=10000;
	do{
		int mask=1<<n;
		int less=10000,ind=n;
		out=0;
		for(int i=0;i<n;i++){
			less=10000;
			for(int j=0;j<n;j++){
				if(grid[row[i]][j]<less&&!(mask&(1<<j))){
					ind=j;
					less=grid[row[i]][j];
				}
			}
			mask|=(1<<ind);
			out+=grid[row[i]][ind];
		}
		if(prnt>out)prnt=out;
	}while(next_permutation(row,row+n));
	cout<<prnt<<endl;
	}
	return 0;
}

