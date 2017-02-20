#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int b,s;
int bach[10000];
int spin[10000];

int main()
{
	int t=1;
	while(cin>>b>>s){
		if(b==0&&s==0)break;
		for(int i=0;i<b;i++)cin>>bach[i];
		for(int i=0;i<s;i++)cin>>spin[i];

		if(b<=s){
			cout<<"Case "<<t++<<": "<<0<<endl;
			continue;
		}
		sort(bach,bach+b);
		cout<<"Case "<<t++<<": "<<b-s<<" "<<bach[0]<<endl;
		
	}	
	return 0;
}

