#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node* left;
    node* right;
    node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};
void addnode(node *root,int a){
    if(a>root->data){
        if(root->right!=NULL){
            addnode(root->right,a);
        }
        else{
            node * s=new node(a);
            root->right=s;
        }
    }
    if(a<root->data){
        if(root->left!=NULL){
            addnode(root->left,a);
        }
        else{
            node * s=new node(a);
            root->left=s;
        }
    }
} 
node *buildTree(int n, int arr[]){
    node *root= new node(arr[0]);
    int i=1;
    while(i<n){
        node *temp=new node(arr[i]);
        addnode(root,arr[i]);
        i++;
    }
    return root;
}
void preorder(node*root){
    cout<<root->data<<' ';
    if(root->left!=NULL){
        preorder(root->left);
    }
    if(root->right!=NULL){
        preorder(root->right);
    }
    return;
}
void printNo(int s,int e,node*root){
    if(root==NULL){
        return;
    }
    int d=root->data;
    if(d>=s &&d<=e){
        
        printNo(s,e,root->left);
                cout<<d<<' ';

        printNo(s,e,root->right);
    }
    else if(d<s){
        printNo(s,e,root->right);
    }
    else if(d>e){
        printNo(s,e,root->left);
    }
    return;

}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<endl;
        node* root=buildTree(n,arr);
        cout<<"# Preorder : ";preorder(root);cout<<endl;
        int start,end;
        cin>>start>>end;
        cout<<"# Nodes within range are : ";printNo(start,end,root);
    }


    return 0;
}