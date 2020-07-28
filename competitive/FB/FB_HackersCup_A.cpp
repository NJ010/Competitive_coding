#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int test=1;
    while(t--){
        int n;
        cin>>n;
        string incoming,outgoing;
        cin>>incoming>>outgoing;
        char dp[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                dp[i][j]='X';
            }
        }
        for(int i=0;i<n;i++){
            dp[i][i]='Y';
        }
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(dp[i][j]=='X'){
                if(outgoing[i]=='N'){
                    dp[i][j]='N';
                    continue;
                }
                if(outgoing[j-1]=='N'){
                    dp[i][j]='N';
                    continue;
                }
                if(incoming[j]=='Y' && dp[i][j-1]=='Y' ){
                    
                        dp[i][j]='Y';
                    
                }
                    
                    else{
                        dp[i][j]='N';
                    }
                }
            }
                
            }
        
        for(int i=n-1;i>0;i--){
            for(int j=i-1;j>=0;j--){
                  if(dp[i][j]=='X'){
                if(outgoing[i]=='N'){
                    dp[i][j]='N';
                    continue;
                }
                if(outgoing[j+1]=='N'){
                    dp[i][j]='N';
                    continue;
                }
                
                if(incoming[j]=='Y' && dp[i][j+1]=='Y'){
                   
                        dp[i][j]='Y';
                    
                }
                else{
                    dp[i][j]='N';
                }
                  }
            }
            
        }
        cout<<"Case #"<<test++<<':'<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<dp[i][j];
            }
            cout<<endl;
        }
        
}
	return 0;
}
#include <iostream>
using namespace std;
int main() {
    cout<<"Hello World!";
}
