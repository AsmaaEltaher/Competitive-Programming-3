#include<iostream>
using namespace std;

int k;
int s[14];

int main()
{
	int flag=0;
	while(cin>>k){
		if(k==0)break;
		for(int i=0;i<k;i++){
			cin>>s[i];
		}
		if(flag)cout<<endl;
		for(int i1=0;i1<k;i1++){
			for(int i2=i1+1;i2<k;i2++){
				for(int i3=i2+1;i3<k;i3++){
					for(int i4=i3+1;i4<k;i4++){
						for(int i5=i4+1;i5<k;i5++){
							for(int i6=i5+1;i6<k;i6++){
								cout<<s[i1]<<" "<<s[i2]<<" "<<s[i3]<<" "<<s[i4]<<" "<<s[i5]<<" "<<s[i6]<<endl;
							}
						}
					}
				}
			}
		}
		flag++;
	}
	return 0;
}

