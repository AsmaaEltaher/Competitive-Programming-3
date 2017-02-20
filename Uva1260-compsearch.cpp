#include<iostream>
using namespace std;

int tc,n;
int arr[1000];

int main()
{
	cin>>tc;
	while(tc--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int sum=0;
		for(int i=1;i<n;i++){
			for(int j=i-1;j>=0;j--){
				if(arr[j]<=arr[i])sum++;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}

