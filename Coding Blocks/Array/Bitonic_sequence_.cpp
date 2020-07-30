#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int a[n];
		int b[n];
		 a[0]=1;
		 b[n-1]=1;
		for(int i=1;i<n;i++){
			if(arr[i]>=arr[i-1]){
				a[i]=a[i-1]+1;
			}
			else a[i]=1;
		}
		for(int i=n-2;i>=0;i--){
			if(arr[i]>=arr[i+1]){
				b[i]=b[i+1]+1;
			}
			else b[i]=1;
		}
		int maxi=INT_MIN;
		for(int i=0;i<n;i++){
			maxi=max(maxi,a[i]+b[i]);
		}
		cout<<maxi-1<<endl;;

	}
	return 0;
}