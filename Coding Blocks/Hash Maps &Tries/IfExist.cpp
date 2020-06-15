#include<bits/stdc++.h>
using namespace std;
class node{
	public:
	int data;
	node*next;

node(int d){
	data=d;
	next=NULL;
}


};

class hashmap{ 
	node** table;
	int table_size;
	int curr_size;
	
	int hash_function(int d){
		int a= (d*27) % table_size;
		if(a<0){
		    return -1*a;}
		
		return a;
	}

	public:
	hashmap(int ts){
		table_size=ts;
		table=new node*[table_size];
		curr_size=0;
		for(int i=0;i<table_size;i++){
			table[i]=NULL;
		}
	}
	void insert(int d){
	    
	    
		int i= hash_function(d);
		node* temp=new node(d);
		temp->next=table[i];
		table[i]=temp;
	    
	}
	
		
	bool find(int a){
	    
	    
		int i=hash_function(a);
		
		
			node *temp= table[i];
			
			while(temp!=NULL){
			    
				if(temp->data==a){
					return true;
					
				}
				temp=temp->next;
			}
			return false;
			
		

	}

};
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		hashmap hm = hashmap(3000);
	

		for(int i=0;i<n;i++){
			cin>>arr[i];
            hm.insert(arr[i]);
            
		}
		
	
		
		int q;
		cin>>q;
		
        while(q--){
            
            int a;
            cin>>a;
            
            if(hm.find(a)){
                cout<<"Yes"<<endl;
            }
            else {
                cout<<"No"<<endl;
            }
        }
	}
	return 0;

	
}