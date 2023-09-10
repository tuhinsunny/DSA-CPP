#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public :
    int data;
    Node* next;
    Node* prev;
    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

Node* reverseLinkedList(Node* &head){
    if(head==NULL || head->next==NULL){
        //Condition when linked list contains only 1 or no node
        return head;
    } 
    else{
        //list not empty
        Node* current = head;
        while(current != NULL){
            swap(current->next, current->prev);
            head= current;
            current=current->prev;
        }
        return head;
    }
}

void insertAtTail(Node* &head, Node* &tail, int d){
    //empty list
    if(tail==NULL){
        Node* temp = new Node(d);
        head=temp;
        tail=temp;
    }
    else{
        //Not empty list
        Node* temp = new Node(d);
        tail->next = temp;
        temp->prev= tail;
        tail = temp;
    }
}
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


int main(){
    cout<<"Enter the size of the Linked List : ";
    int n;
    cin>>n;
    cout<<"Enter the elements of the linked list : "<<endl;
    Node* head=NULL;
    Node* tail=NULL;
    int value;
    for(int i=0;i<n;i++){
        cin>>value;
        insertAtTail(head, tail, value);
    }    
    cout<<"Initial Linked List : "<<endl;
    print(head);
    cout<<"Reverse Linked List : "<<endl;
    print(reverseLinkedList(head));
    return 0;
}