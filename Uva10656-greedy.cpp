#include<iostream>
using namespace std;

int n;
int num[1000];

int main()
{
	while(cin>>n){
		if(n==0)break;
		for(int i=0;i<n;i++)cin>>num[i];
		int cnt=0;
		for(int i=0;i<n;i++){
			if(num[i]==0)continue;
			if(cnt)cout<<" ";
			cout<<num[i];
			cnt++;
		}
		if(cnt==0)cout<<0;
		cout<<endl;
	}
	return 0;
}

