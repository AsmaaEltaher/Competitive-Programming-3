#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int q;
string str;
int arr[100];
vector<vector<int>>ind;
vector<int>empty;

bool solve(string temp){
	int pre=0,j;
	for(int i=0;i<temp.size();i++){
		j=lower_bound(ind[temp[i]-'A'].begin(),ind[temp[i]-'A'].end(),pre)-ind[temp[i]-'A'].begin();
		if(j<0||j>=ind[temp[i]-'A'].size())return 0;
		arr[i]=ind[temp[i]-'A'][j];
		pre=ind[temp[i]-'A'][j]+1;
	}
	return 1;
}

int main()
{
	for(int i=0;i<60;i++)ind.push_back(empty);
	getline(cin,str);
	for(int i=0;i<str.size();i++){
		ind[str[i]-'A'].push_back(i);
	}
	string temp;
	cin>>q;
	cin.ignore();
	while(q--){
		getline(cin,temp);
		if(solve(temp)){
			cout<<"Matched "<<arr[0]<<" "<<arr[temp.size()-1]<<endl;
		}
		else cout<<"Not matched"<<endl;
	}
	return 0;
}

