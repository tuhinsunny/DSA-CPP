#include<bits/stdc++.h>
using namespace std;
class node{
    public :
    int data;
    node* left;
    node* right;
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
//Tree is created
node* buildTree(node* root){
    int data;
    cout<<"Enter data : ";
    cin>>data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout<<"Enter Data for Inserting at left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter Data for Inserting at right of "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}
void inorder(node* root){
    stack<node*> st;
    node* temp = root;
    while(!st.empty() || temp!=NULL){
        if(temp!=NULL){
            st.push(temp);
            temp = temp->left;
        }
        else{
            temp = st.top();
            st.pop();
            cout<<temp->data<<" ";
            temp = temp->right;
        }
    }
}
void preorder(node* root){
    stack<node*> st;
    node* temp = root;
    st.push(root);
    while(!st.empty()){
        temp = st.top();
        st.pop();
        cout<<temp->data<<" ";
        if(temp->right!=NULL){
            st.push(temp->right);
        }
        if(temp->left!=NULL){
            st.push(temp->left);
        }
    }
}
void postorder(node* root){
    vector<int> v;
        if(root==NULL){
            for(int i : v){
                cout<<i<<" ";
            }
        }
        stack<node*> st;
        st.push(root);
        while(!st.empty()){
            node* temp=st.top();
            st.pop();
            v.push_back(temp->data);
            if(temp->left) 
            st.push(temp->left);
            if(temp->right) 
            st.push(temp->right);
        }
        reverse(v.begin(),v.end());
        for(int i : v){
                cout<<i<<" ";
            }
}
int main(){
    node* root = NULL;
    root = buildTree(root);
    //tree = 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout<<endl;
    cout<<"Inorder Traversal : "<<endl;
    inorder(root);
    cout<<endl;
    cout<<"Preorder Traversal : "<<endl;
    preorder(root);
    cout<<endl;
    cout<<"Postorder Traversal : "<<endl;
    postorder(root);
}