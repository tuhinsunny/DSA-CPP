#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//creating the node
class node{
    public :
    int data;
    node* left;
    node* right;

    //constructor
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root){
    cout<<"Enter the data : ";
    int data;
    cin>>data;
    root = new node(data);

    if(data == -1)
    return NULL;

    cout<<"Enter the value to insert to the left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter the value to insert to the right of "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}
//Left root right
void inorder(node* root){
    if(root==NULL)
    return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
//root left right
void preorder(node* root){
    if(root==NULL)
    return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
//left right root
void postorder(node* root){
    if(root==NULL)
    return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);//acts as a seperator
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp==NULL){
            //go to the next line
            cout<<endl;
            if(!q.empty())
            q.push(NULL);
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);
        }
    }
}
void reverseLevelOrder(node* root){
    vector<int> ans;
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp==NULL){
            ans.push_back(-1);
            if(!q.empty())
            q.push(NULL);
        }
        else{
            ans.push_back(temp->data);
            if(temp->right)
            q.push(temp->right);
            if(temp->left)
            q.push(temp->left);
        }
    }
    reverse(ans.begin(),ans.end());
    for(int i:ans){
        if(i==-1)
        cout<<endl;
        else{
            cout<<i<<" ";
        }
    }
}
node* buildFromLevelOrder(node* &root){
    queue<node*> q;
    int data;
    cout<<"Enter data for root : ";
    cin>>data;
    root = new node(data);
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        cout<<"Enter left node for "<<temp->data<<endl;
        int leftData;
        cin>>leftData;
        if(leftData!=-1){
            temp->left = new node(leftData);
            q.push(temp->left);
        }
        cout<<"Enter right node for "<<temp->data<<endl;
        int rightData;
        cin>>rightData;
        if(rightData!=-1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}
int main(){
    node* root = NULL;
    buildFromLevelOrder(root);
    //root = buildTree(root);
     cout<<"Inorder Traversal :"<<endl;
    inorder(root);
    // cout<<endl;
    // cout<<"Preorder Traversal :"<<endl;
    // preorder(root);
    // cout<<endl;
    // cout<<"Postorder Traversal :"<<endl;
    // postorder(root);
    // cout<<endl;
    // cout<<"Level Order Traversal :"<<endl;
    // levelOrderTraversal(root);
    // cout<<"Reverse Level Order Traversal :";
    // reverseLevelOrder(root);
    return 0;
}