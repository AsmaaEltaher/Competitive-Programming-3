#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

int tc,d,q;
string cars[10000];
int low[10000],high[10000];

int main()
{
	cin>>tc;
	while(tc--){
		cin>>d;
		for(int i=0;i<d;i++){
			cin>>cars[i]>>low[i]>>high[i];
		}
		cin>>q;
		int temp;
		for(int i=0;i<q;i++){
			cin>>temp;
			string ans="UNDETERMINED";
			bool flag=0;
			for(int j=0;j<d;j++){
				if(temp>=low[j]&&temp<=high[j]){
					if(flag)ans="UNDETERMINED";
					else{
						flag=1;
						ans=cars[j];
					}
				}
			}
			cout<<ans<<endl;
		}
		if(tc!=0)cout<<endl;
	}
	return 0;
}

