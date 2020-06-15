#include<bits/stdc++.h>
using namespace std;
bool compare(pair<int,int>x , pair<int,int>y){
    
    
    return x.first<=y.first;


}
bool comp(pair<int,int>x , pair<int,int>y){
    return x.second <  y.second;
}
int main() {

	int n;
	cin>>n;
	pair<int,int> cir[n];
	pair<int,int> cir1[n];
	for(int i=0;i<n;i++){
		int a;
		int b;
		cin>>a>>b;
		cir[i]=make_pair(a,b);
		cir1[i]=cir[i];
		
	}
	sort(cir,cir+n,compare);
	sort(cir1,cir1+n,comp);
	int area=0;
	int delx=0;
	int dely=0;
	for(int i=1;i<n;i++){
	    
	 if(cir[i].first-cir[i-1].first>delx){
	     delx=cir[i].first-cir[i-1].first-1;
	 }
	 if(cir1[i].second-cir1[i-1].second>dely){
	     dely=cir1[i].second-cir1[i-1].second-1;
	 }
	}
	cout<<delx*dely;

	return 0;
}