#include "stdafx.h"
#include<iostream>
#include<algorithm>
#include<math.h>
#include<iomanip>
using namespace std;

int n,m;
int r[10],f[100];
double d[1000];

int main()
{
	while(cin>>n){
		if(n==0)break;
		cin>>m;
		for(int i=0;i<n;i++){
			cin>>f[i];
		}
		for(int i=0;i<m;i++){
			cin>>r[i];
		}
		int cnt=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				d[cnt++]=(double)r[j]/(double)f[i];
			}
		}
		sort(d,d+cnt);
		double maxd=0;
		for(int i=0;i<cnt-1;i++){
			maxd=max(maxd,d[i+1]/d[i]);
		}
		cout<<fixed<<setprecision(2)<<maxd<<endl;
	}

	return 0;
}

