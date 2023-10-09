#include<iostream>
#include<queue>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

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

    if(data==-1){
        return NULL;
    }

    cout<<"Enter Data for Inserting at left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter Data for Inserting at right of "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}

void levelOrderTraversal(node *root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);//seperator to print in seperate lines levelwise
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp==NULL){//purana level complete traverse ho chuka hain
            cout<<endl;
            if(!q.empty()){//queue still has some children 
                q.push(NULL);
            }
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
        if(temp == NULL){
            ans.push_back(-1);
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            ans.push_back(temp->data);
            if(temp->right)
            q.push(temp->right);
            if(temp->left)
            q.push(temp->left);
        }
    }
    reverse(ans.begin(), ans.end());
    for(int i : ans){
        if(i==-1){
            cout<<endl;
        }
        else{
            cout<<i<<" ";
        }
    }
}
void inorder(node *root){
    //base case
    if(root == NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node *root){
    //base case
    if(root == NULL){
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node *root){
    //base case
    if(root == NULL){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
node* buildFromLevelOrder(node* &root){
    queue<node*> q;
    cout<<"Enter data for root : ";
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        cout<<"Enter left node for : "<<temp->data<<endl;
        int leftData;
        cin>>leftData;
        if(leftData!=-1){
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter right node for : "<<temp->data<<endl;
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
    /*
    //creating a tree
    root = buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout<<"Printing the level order traversal output : "<<endl;
    levelOrderTraversal(root);
    cout<<"Inorder Traversal : "<<endl;
    inorder(root);
    cout<<endl;
    cout<<"Preorder Traversal : "<<endl;
    preorder(root);
    cout<<endl;
    cout<<"Postorder Traversal : "<<endl;
    postorder(root);
    cout<<endl;
    cout<<"Reverse Level Order Traversal : ";
    reverseLevelOrder(root);*/
    return 0;
}
/*
Enter the data : 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
Enter Data for Inserting at left of 1
Enter the data : Enter Data for Inserting at left of 3
Enter the data : Enter Data for Inserting at left of 7
Enter the data : Enter Data for Inserting at right of 7
Enter the data : Enter Data for Inserting at right of 3
Enter the data : Enter Data for Inserting at left of 11
Enter the data : Enter Data for Inserting at right of 11
Enter the data : Enter Data for Inserting at right of 1
Enter the data : Enter Data for Inserting at left of 5
Enter the data : Enter Data for Inserting at left of 17
Enter the data : Enter Data for Inserting at right of 17
Enter the data : Enter Data for Inserting at right of 5
Enter the data : Printing the level order traversal output : 
1
3 5
7 11 17
Inorder Traversal :
7 3 11 1 17 5
Preorder Traversal :
1 3 7 11 5 17
Postorder Traversal :
7 11 3 17 5 1
Reverse Level Order Traversal :
7 11 17
3 5
1
*/