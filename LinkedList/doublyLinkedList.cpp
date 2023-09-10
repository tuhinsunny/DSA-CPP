#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
     
     //constructor
    Node(int d){
        this->data = d;
        this->prev=NULL;
        this->next=NULL;
    }
    //destructor
    ~Node(){
        int val = this->data;
        if(this->next!= NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for data "<<val<<endl;
    }
    
};
//traversing the linkedList
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
//finding the length of the Linked List
int getLength(Node* head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
void insertAtHead(Node* &head, Node* &tail, int d){
    //Empty list
    if(head==NULL){
        Node* temp = new Node(d);
        head=temp;
        tail=temp;
    }
    else{
        //Creating a new Node
        Node* temp = new Node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}
void insertAtTail(Node* &head, Node* &tail, int d){
    //Empty list
    if(tail==NULL){
        Node* temp = new Node(d);
        tail=temp;
        head=temp;
    }
    else{
        Node* temp = new Node(d);
        tail->next = temp;
        temp->prev=tail;
        tail=temp;
    }
}
void insertAtPosition(Node* &head, Node* &tail, int d, int position){
    if(position==1){
        insertAtHead(head, tail, d);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    //insert at last position
    if(temp->next==NULL){
        insertAtTail(head, tail, d);
        return;
    }
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;
}
void deleteNode(int val, Node* &head, Node* &tail){
    //if instead of position value is given we first find the position
    int position=1;
    Node* tempo = head;
    while(tempo->data!=val){
        position++;
        tempo=tempo->next;
    }

    //deleting first or start node
    if(position==1){
        Node* temp = head;
        temp->next->prev= NULL;
        head=temp->next;
        temp->next= NULL;
        delete temp;
    }
    else{
        Node* current = head;
        Node* previous = NULL;
        int cnt=1;
        while(cnt < position){
            previous=current;
            current=current->next;
            cnt++;
        }
        current->prev= NULL;
        previous->next = current->next;
        current->next = NULL;
        delete current;
        if(previous->next==NULL){
            tail=previous;
        }
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    print(head);
    insertAtTail(head, tail, 11);
    print(head);
    insertAtTail(head, tail, 15);
    print(head);
    insertAtTail(head, tail, 8);
    print(head);
    insertAtPosition(head, tail, 99, 2);
    print(head);
    insertAtPosition(head, tail, 101, 1);
    print(head);
    insertAtPosition(head, tail, 97, 6);
    print(head);
    deleteNode(99, head, tail);
    print(head);
    deleteNode(101, head, tail);
    print(head);
    deleteNode(97, head, tail);
    print(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    cout<<"Length of Linked List : "<<getLength(head)<<endl;
    return 0;
}
//OUTPUT :
/*
11
11 15
11 15 8
11 99 15 8
101 11 99 15 8
101 11 99 15 8 97
Memory is free for data 99
101 11 15 8 97
Memory is free for data 101
11 15 8 97
Memory is free for data 97
11 15 8
11
8
Length of Linked List : 3
*/