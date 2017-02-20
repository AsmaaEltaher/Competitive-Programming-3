#include "stdafx.h"
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int n,d,r;
int mor[100];
int ev[100];

int main()
{
	while(cin>>n>>d>>r){
		if(n==0&&d==0&&r==0)break;
		for(int i=0;i<n;i++)cin>>mor[i];
		for(int i=0;i<n;i++)cin>>ev[i];
		sort(mor,mor+n);
		sort(ev,ev+n);
		int sum=0;
		for(int i=0;i<n;i++){
			if((mor[i]+ev[n-1-i])>d){
				sum+=((mor[i]+ev[n-1-i])-d)*r;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}

