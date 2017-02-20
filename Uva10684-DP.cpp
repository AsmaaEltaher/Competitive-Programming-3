#include<iostream>
using namespace std;

int n;
int num[10005]/*,acum[10005]*/;

int main()
{
	while(cin>>n){
		if(n==0)break;
		int pre=0;
		int ans=0,curr=0,out=0;
		for(int i=1;i<=n;i++){
			cin>>num[i];

			curr+=num[i];
			if(curr>out)out=curr;
			if(curr<0)curr=0;

			/*acum[i]=num[i]+pre;
			pre=acum[i];*/
		}
		/*for(int i=0;i<n;i++){
			for(int j=i+1;j<=n;j++){
				curr=acum[j]-acum[i];
				if(curr>ans)ans=curr;
			}
		}*/

		if(out>0)cout<<"The maximum winning streak is "<<out<<"."<<endl;
		else cout<<"Losing streak."<<endl;
	}
	return 0;
}

