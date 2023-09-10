#include<iostream>
using namespace std;

class Node{
    public :
    Node* next;
    int data;
    //Constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    //destructor
    ~Node(){
        int val=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for data "<<val<<endl;
    }
};

void insertNode(Node* &tail, int element, int d){
    if(tail==NULL){
        Node* temp = new Node(d);
        tail=temp;
        temp->next=temp; // Apne end ko apne aap se hi point karwa liya to make the list circular
    }
    else{
        //non empty list
         //Assuming the the element is present in the list
        Node* curr = tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        //element found
        //creating a new node
        Node* temp = new Node(d);
        temp->next=curr->next;
        curr->next=temp;

    }
}
void print(Node* tail){
    if(tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    Node* temp = tail;
    //we are using do while loop because we need to print it atleast once . 
    //If while loop was used, data could not be printed for 1 node
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail != temp);
    cout<<endl;
}
void deleteNode(Node* &tail, int value){
    //empty list . For 0 nodes
    if(tail==NULL){
        cout<<"List is empy please check again"<<endl;
        return;
    }
    else{
        //non empty list
        //assuming that value is present in the Linked list
        Node* prev = tail;
        Node* curr= prev->next;
        while(curr->data != value){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        //for 1 node
        if(curr==prev)
        tail=NULL;
        else if(tail==curr)//for greater than equals to 2 node
        tail=prev;
        curr->next = NULL;
        delete curr;
    }
}

int main(){
    //Creating a node which is empty at first
    Node* tail = NULL;
    insertNode(tail , 5, 3);
    print(tail);
    insertNode(tail , 3, 4);
    print(tail);
    insertNode(tail , 3, 7);
    print(tail);
    insertNode(tail , 7, 99);
    print(tail);
    insertNode(tail , 4, 54);
    print(tail);
    insertNode(tail , 54, 10);
    print(tail);
    deleteNode(tail, 3);
    print(tail);
    deleteNode(tail, 10);
    print(tail);
    deleteNode(tail, 4);
    print(tail);
    deleteNode(tail, 99);
    print(tail);
    deleteNode(tail, 7);
    print(tail);
    deleteNode(tail, 54);
    print(tail);
    return 0;
}
//Output :
/*
3 
3 4
3 7 4
3 7 99 4
3 7 99 4 54
3 7 99 4 54 10
Memory is free for data 3
10 7 99 4 54
Memory is free for data 10
54 7 99 4
Memory is free for data 4
54 7 99
Memory is free for data 99
54 7
Memory is free for data 7
54 
Memory is free for data 54
List is empty
*/