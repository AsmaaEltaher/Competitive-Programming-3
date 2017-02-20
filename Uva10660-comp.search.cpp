#include "stdafx.h"
#include<iostream>
using namespace std;

int erea[25][2];
int pop[25][3];

int main()
{
	erea[0][0]=0;erea[0][1]=0;erea[1][0]=0;erea[1][1]=1;erea[2][0]=0;erea[2][1]=2;erea[3][0]=0;erea[3][1]=3;erea[4][0]=0;erea[4][1]=4;
	erea[5][0]=1;erea[5][1]=0;erea[6][0]=1;erea[6][1]=1;erea[7][0]=1;erea[7][1]=2;erea[8][0]=1;erea[8][1]=3;erea[9][0]=1;erea[9][1]=4;
	erea[10][0]=2;erea[10][1]=0;erea[11][0]=2;erea[11][1]=1;erea[12][0]=2;erea[12][1]=2;erea[13][0]=2;erea[13][1]=3;erea[14][0]=2;erea[14][1]=4;
	erea[15][0]=3;erea[15][1]=0;erea[16][0]=3;erea[16][1]=1;erea[17][0]=3;erea[17][1]=2;erea[18][0]=3;erea[18][1]=3;erea[19][0]=3;erea[19][1]=4;
	erea[20][0]=4;erea[20][1]=0;erea[21][0]=4;erea[21][1]=1;erea[22][0]=4;erea[22][1]=2;erea[23][0]=4;erea[23][1]=3;erea[24][0]=4;erea[24][1]=4;
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>pop[i][0]>>pop[i][1]>>pop[i][2];
		}
		int ii=0,jj=0,kk=0,uu=0,vv=0;
		long long sum=0,mx=100000000000,curr=0;
		for(int i=0;i<25;i++){
			for(int j=i+1;j<25;j++){
				for(int k=j+1;k<25;k++){
					for(int u=k+1;u<25;u++){
						for(int v=u+1;v<25;v++){
							sum=0;
							for(int x=0;x<n;x++){
								curr=(abs(erea[i][0]-pop[x][0])+abs(erea[i][1]-pop[x][1]))*pop[x][2];
								if((abs(erea[j][0]-pop[x][0])+abs(erea[j][1]-pop[x][1]))*pop[x][2]<curr)curr=(abs(erea[j][0]-pop[x][0])+abs(erea[j][1]-pop[x][1]))*pop[x][2];
								if((abs(erea[k][0]-pop[x][0])+abs(erea[k][1]-pop[x][1]))*pop[x][2]<curr)curr=(abs(erea[k][0]-pop[x][0])+abs(erea[k][1]-pop[x][1]))*pop[x][2];
								if((abs(erea[u][0]-pop[x][0])+abs(erea[u][1]-pop[x][1]))*pop[x][2]<curr)curr=(abs(erea[u][0]-pop[x][0])+abs(erea[u][1]-pop[x][1]))*pop[x][2];
								if((abs(erea[v][0]-pop[x][0])+abs(erea[v][1]-pop[x][1]))*pop[x][2]<curr)curr=(abs(erea[v][0]-pop[x][0])+abs(erea[v][1]-pop[x][1]))*pop[x][2];
								sum+=curr;
							}
							if(sum<mx){
								mx=sum;
								ii=i;jj=j;kk=k;uu=u;vv=v;
							}
						}
					}
				}
			}
		}
		cout<<ii<<" "<<jj<<" "<<kk<<" "<<uu<<" "<<vv<<endl;
	}
	return 0;
}

