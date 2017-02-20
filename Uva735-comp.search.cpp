#include<iostream>
using namespace std;

int s;
int m[100];
bool p[70][70][70];

int main()
{
	int n=0;
	m[n++]=0;m[n++]=1;m[n++]=2;m[n++]=3;m[n++]=4;m[n++]=5;m[n++]=6;m[n++]=7;m[n++]=8;m[n++]=9;m[n++]=10;
	m[n++]=11;m[n++]=12;m[n++]=13;m[n++]=14;m[n++]=15;m[n++]=16;m[n++]=17;m[n++]=18;m[n++]=19;m[n++]=20;
	m[n++]=21;m[n++]=22;m[n++]=24;m[n++]=26;m[n++]=27;m[n++]=28;m[n++]=30;
	m[n++]=32;m[n++]=33;m[n++]=34;m[n++]=36;m[n++]=38;m[n++]=39;m[n++]=40;
	m[n++]=42;m[n++]=45;m[n++]=48;m[n++]=50;m[n++]=51;m[n++]=54;m[n++]=57;m[n++]=60;
	//cout<<n;
	while(cin>>s){
		if(s<=0){
			cout<<"END OF OUTPUT"<<endl;
			break;
		}
		memset(p,0,sizeof p);
		int cnt=0;
		int com=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				for(int k=0;k<n;k++){
					if(m[i]+m[j]+m[k]==s){
						cnt++;
						if(!p[m[i]][m[j]][m[k]]){
							com++;
							p[m[i]][m[j]][m[k]]=1;
							p[m[i]][m[k]][m[j]]=1;
							p[m[j]][m[i]][m[k]]=1;
							p[m[j]][m[k]][m[i]]=1;
							p[m[k]][m[j]][m[i]]=1;
							p[m[k]][m[i]][m[j]]=1;
						}
					}
				}
			}
		}
		if(cnt==0)cout<<"THE SCORE OF "<<s<<" CANNOT BE MADE WITH THREE DARTS."<<endl;
		else {
		cout<<"NUMBER OF COMBINATIONS THAT SCORES "<<s<<" IS "<<com<<"."<<endl;
		cout<<"NUMBER OF PERMUTATIONS THAT SCORES "<<s<<" IS "<<cnt<<"."<<endl;
		}
		cout<<"**********************************************************************"<<endl;
	}
	return 0;
}

