#include<iostream>
using namespace std;

int n;
int rung[110000];

bool solve(int x){
	int pre=0;
	for(int i=0;i<n;i++){
		if(rung[i]-pre>x || x==0)return 0;
		else if((rung[i]-pre)==x){
			pre=rung[i];
			x--;
		}
		else if(rung[i]-pre<x){
			pre=rung[i];
		}
	}
	return 1;
}

int main()
{
	int tc,t=0;
	cin>>tc;
	while(t++<tc){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>rung[i];
		}
		int s=1,e=11000000,mid,ret,out=0;
		while(s<=e){
			mid=(s+e)/2;
			ret=solve(mid);
			if(ret){
				e=mid-1;
				out=mid;
			}
			else {
				s=mid+1;
			}
		}
		cout<<"Case "<<t<<": "<<out<<endl;
	}
	return 0;
}

