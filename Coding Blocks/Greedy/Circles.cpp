#include<bits/stdc++.h>
using namespace std;
bool compare(pair<int,int>a , pair<int,int>b){

	if(a.first+a.second == b.first+b.second){
		
		return a.first-a.second < b.first-b.second;
	}
    
	return a.first+a.second < b.first+b.second;
}
int main() {

	int n;
	cin>>n;
	pair<int,int> cir[n];
	for(int i=0;i<n;i++){
		int a;
		int b;
		cin>>a>>b;
		cir[i]=make_pair(a,b);
		
	}


	sort(cir,cir+n,compare);
	int ans=1;
	int curr=cir[0].first+cir[0].second;

	for(int i=1;i<n;i++){
	
		if(curr<=cir[i].first-cir[i].second){
			ans++;
			curr=cir[i].first+cir[i].second;
			
		}
	}
	cout<<n-ans;
	


	return 0;
}