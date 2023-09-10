#include<iostream>
using namespace std;

class Node{
    public :
    int data;
    Node* next;
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};
void push(Node* &top, int d){
    Node * temp = new Node(d);
    if(temp == NULL){
        cout<<"Stack Overflow"<<endl;
    }
    else{
        //temp->data = d;
        temp->next = top;
        top = temp;
    }
}
int isEmpty(Node* top){
    if(top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
void pop(Node* &top){
    if(isEmpty(top)){
        cout<<"Stack Underflow"<<endl;
    }
    else{
        Node* temp = top;
        top = top->next;
        int x = temp->data;
        delete temp;
        cout<<"Popped Out element is "<<x<<endl;
    }
}
void peek(Node* top){
    if(isEmpty(top)){
        cout<<"Stack Underflow. There is no peeked element"<<endl;
    }
    else{
        cout<<"Peeked element is "<<top->data<<endl;
    }
}
void print(Node* &head){
    if(head == NULL){
        cout<<"No elements present . Stack is empty"<<endl;
    }
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main(){
    
    Node* top = NULL;
    push(top, 25);
    push(top, 54);
    push(top, 56);
    push(top, 55);
    push(top, 48);
    push(top, 25);
    push(top, 34);
    peek(top);
    print(top);
    pop(top);
    peek(top);
    pop(top);
    peek(top);
    pop(top);
    pop(top);
    pop(top);
    pop(top);
    pop(top);
    pop(top);
    peek(top);
    print(top);
    return 0;
}
/*
Output :
Peeked element is 34
34
25
48
55
56
54
25
Popped Out element is 34
Peeked element is 25
Popped Out element is 25
Peeked element is 48
Popped Out element is 48
Popped Out element is 55
Popped Out element is 56
Popped Out element is 54
Popped Out element is 25
Stack Underflow
Stack Underflow. There is no peeked element
No elements present . Stack is empty

*/