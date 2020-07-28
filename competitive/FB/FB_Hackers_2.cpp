#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int t;
    cin>>t;
    int test=1;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        // bool arr[s.length()];
        int  a=0,b=0;
        for(int i=0;i<s.length();i++){
            // if(s[i]=='A'){
            //     arr[i]=0;
            // }
            // else{
            //     arr[i]=1;
            // }
            if(s[i]=='A'){
                a++;
            }
            else{
                b++;
            }
        }
        if(a-b==1 || b-a==1){
        cout<<"Case #"<<test++<<':'<<'Y'<<endl;
        continue;
        }
        else{
        cout<<"Case #"<<test++<<':'<<'N'<<endl;
        }
        
        
        
        
}
	return 0;
}
