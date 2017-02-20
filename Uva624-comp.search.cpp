#include<iostream>
#include <utility>
#include<cmath>
using namespace std;

int n,t,out,prnt;
int trk[20];

void solvve(int sum,int ind,int mask){
	if(ind==t){
		if(sum<=n){
			if(sum>out){
				out=sum;
				prnt=mask;
			}
		}
		return;
	}
	solvve(sum+trk[ind],ind+1,mask|(1<<ind));
	solvve(sum,ind+1,mask);
}

int main()
{
	while(cin>>n>>t){
		out=0;
		prnt=0;
		for(int i=0;i<t;i++){
			cin>>trk[i];
		}
		solvve(0,0,0);
		int pos=0;
		//cout<<"------";
		while(prnt>0){
			if(prnt&1==1){
				cout<<trk[pos]<<" ";
			}
			pos++;
			prnt>>=1;
		}
		cout<<"sum:"<<out<<endl;
		//cout<<"------";
	}
	return 0;
}

