#include<iostream>
using namespace std;

unsigned long long n,m,l,u,x,y;

int main()
{
	while(cin>>n>>l>>u){
		m=0;
		for(int i=31;i>=0;i--){
			if(n&(1u<<i) ){
				x=m+(1u<<i);
				if(x<=l)
					m+=(1u<<i);
			}
			else{
				y=m+(1u<<i);
				if(y<=u)
					m+=(1u<<i);
			}
		}
		cout<<m<<endl;
	}
	return 0;
}


