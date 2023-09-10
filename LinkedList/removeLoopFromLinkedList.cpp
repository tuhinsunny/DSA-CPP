#include<iostream>
using namespace std;

class Node{
    public :
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
Node* FloydDetectLoop(Node* head){
    if(head==NULL)
    return NULL;

    Node* fast =  head;
    Node* slow = head;
    while(fast!=NULL && slow!=NULL){
        fast = fast->next;
        if(fast!=NULL)
        fast=fast->next;
        slow=slow->next;
        if(fast==slow){
        cout<<"Inersected at "<<slow->data<<endl;
        return slow;
        }
    }
    return NULL;
}

Node* getStartingNode(Node* head){
    if(head==NULL)
    return NULL;
    Node* intersection = FloydDetectLoop(head);
    Node* slow = head;
    while(slow!=intersection){
        slow=slow->next;
        intersection = intersection->next;
    }
    return slow;
}
void insertAtHead(Node* &head , Node* &tail, int d){
    if(head==NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    //new node create
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &head, Node* &tail , int d){
    if(head==NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
    //new node create
    Node* temp = new Node(d);
    tail->next= temp;
    tail = temp;   
    }  
}
void removeLoop(Node* &head){
    if(head==NULL)
    return;
    Node* startLoop = getStartingNode(head);
    Node* temp =startLoop;
    while(temp->next!=startLoop){
        temp = temp->next;
    }
    temp->next = NULL;
}
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* tail = NULL;
    Node* head = NULL;
    insertAtTail(head, tail, 10);    
    insertAtTail(head, tail, 12);    
    insertAtTail(head, tail, 15);    
    insertAtTail(head, tail, 22);    
    print(head);
    tail->next = head->next;
    if(FloydDetectLoop(head)!= NULL)
    cout<<"Cycle is Present "<<endl;
    else
    cout<<"Cycle is not Present "<<endl;
    Node* loop = getStartingNode(head);
    cout<<"Loop starts at : "<<loop->data<<endl;
    removeLoop(head);// loop is removed
    print(head);
    if(FloydDetectLoop(head)!= NULL)
    cout<<"Cycle is Present "<<endl;
    else
    cout<<"Cycle is not Present "<<endl;
    return 0;
}
//output
/*
10 12 15 22 
Inersected at 22
Cycle is Present
Inersected at 22
Loop starts at : 12
Inersected at 22
10 12 15 22
Cycle is not Present
*/