#include<iostream>
using namespace std;
int main() {
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int l=0;
	int zeros=0;
	int maxlen=0;
	int lans;
	for(int r=0;r<n;r++){

		if(arr[r]==0){
			zeros++;
		}
		
		while(zeros>k){
			if(arr[l]==0){
				zeros--;
				l++;
			}
			else{
				l++;
			}
		}
		if(r-l+1>maxlen){
			maxlen=r-l+1;
			lans=l;
		}
	}
	cout<<maxlen<<endl;
	for(int i=0;i<n;i++){
		if(i>lans &&i<lans+maxlen){
			cout<<1<<" ";
			continue;
		}
		cout<<arr[i]<<' ';
	}
	return 0;
}