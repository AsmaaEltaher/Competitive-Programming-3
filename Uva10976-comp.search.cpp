#include "stdafx.h"
#include<iostream>
#include <string>
using namespace std;

double x;
int ans[10000][2];


int main()
{
	while(cin>>x){
		double y=x+1,z=(y*x)/(y-x);
		int cnt=0;
		while(z>=y){
			if(z-(int)z==0){
				ans[cnt][0]=z;
				ans[cnt][1]=y;
				//ans[cnt]="1/"+(x+'0')+" = 1/"+(z+'0')+" + 1/"+(y+'0');
				//cout<<1/x<<" = "<<1/z<<" + "<<cout<<1/y<<" = "<<1/z+1/y<<endl;
				cnt++;
			}
			y++;
			z=(y*x)/(y-x);
		}
		cout<<cnt<<endl;
		for(int i=0;i<cnt;i++){
			cout<<"1/"<<x<<" = 1/"<<ans[i][0]<<" + 1/"<<ans[i][1]<<endl;
		}
	}
	return 0;
}

