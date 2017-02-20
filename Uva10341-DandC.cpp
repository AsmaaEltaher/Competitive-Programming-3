#include "stdafx.h"
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int p,q,r,s,t,u;

double solve(double x){
	//"p ∗ e−x + q ∗ sin(x) + r ∗ cos(x) + s ∗ tan(x) + t ∗ x2 + u"
	return p*exp(-x)+q*sin(x)+r*cos(x)+ s*tan(x)+t*x*x+u;
}

int main()
{
	while(cin>>p>>q>>r>>s>>t>>u){
		double s=0.0000,e=1.0000,mid;
		double out=-1,ret;
		if(ceil(solve(0)*10000)==0)out=0;
		else if(ceil(solve(1)*10000)==0)out=1;
		else while(e-s>0.0000000001){
			mid=(s+e)/2.0;
			ret=solve(mid);
			if(fabs(ret)<0.0000001){
				out=mid;
				break;
			}
			else if(ret<0){
				e=mid;
			}
			else s=mid;
		}
		if(out<0)cout<<"No solution"<<endl;
		else cout<<fixed<<setprecision(4)<<out<<endl;
	}
	return 0;
}

