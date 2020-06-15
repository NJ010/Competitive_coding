#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,k;
	cin>>n>>k;
	int arr[n];
	unordered_map<int,int> mp;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		mp[arr[i]]=i;
		}
		int curr=n;
		int i=0;
	while(k){
        if(i>=n){
            break;
        }
		if(arr[i]!=curr){
			int a=mp[curr];
            mp[curr]=i;
            mp[arr[i]]=a;	
			swap(arr[i],arr[a]);
			k--;			
		}
		i++;
		curr--;
	}	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<' ';
	}
	cout<<endl;


	return 0;
}