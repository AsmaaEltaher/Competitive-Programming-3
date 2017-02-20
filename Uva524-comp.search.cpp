#include<cmath>
#include<iostream>
using namespace std;

int n,tc=0,cnt=0;
int arr[17];
int num[16];

bool is_prime(int x){
	for(int i=2;i<=sqrt(double(x));i++){
		if(x%i==0)return 0;
	}
	return 1;
}

void solve(int ind,int mask){
	if(ind==n){
		if(is_prime(arr[n-1]+arr[0]))
		{
			cnt++;
			for(int i=0;i<n-1;i++)cout<<arr[i]<<" ";
			cout<<arr[n-1]<<endl;
		}

	}
	if(ind==0){
		arr[ind]=num[0];
		solve(ind+1,mask|(1<<0));
	}
	else
	for(int i=0;i<n;i++){
		if(mask&(1<<i) || !is_prime(num[i]+arr[ind-1]))continue;
		arr[ind]=num[i];
		solve(ind+1,mask|(1<<i));
	}
}

int main()
{
	num[0]=1;num[1]=2;num[2]=3;num[3]=4;num[4]=5;num[6]=7;num[7]=8;num[8]=9;num[9]=10;
	num[10]=11;num[11]=12;num[12]=13;num[13]=14;num[14]=15;num[15]=16;num[5]=6;
	while(cin>>n){
		if(tc)cout<<endl;
		cout<<"Case "<<++tc<<":"<<endl;
		cnt=0;
		solve(0,0);
		//cout<<cnt<<endl;
	}
	return 0;
}

