#include<iostream>
#include<cmath>
using namespace std;

int d,k,tc,n;
int an[21];
int seq[1000000];
unsigned long long ans;

int main()
{
	cin>>tc;
	while(tc--){
		ans=0;
		cin>>n;
		n++;
		for(int i=0;i<n;i++){
			cin>>an[i];
		}
		cin>>d>>k;
		int x=0,y=1;
		while(x<k){
			x+=y++*d;
		}
		--y;
		int z=0;
		for(int i=0;i<n;i++){
			ans+=an[i]*pow((double)y,i);
		}
		cout<<ans<<endl;
	}
	return 0;
}

