#include<iostream>
using namespace std;

class Node{
    public :
    int data;
    Node* next;
    //Constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};
void insertAtTail(Node* &head, Node* &tail, int d){
    //no existng node. Empty list
    if(head == NULL){
        Node* temp = new Node(d); 
        head = temp;
        tail = temp;
    }
    else{
        //List not empty
        Node* temp = new Node(d);
        tail->next = temp;
        tail = temp; 
    }
}
Node* reverseLinkedList(Node* head){
    if(head == NULL || head->next == NULL){
        //condition when the linked list contains 1 or no nodes
        return head;
    }
    else{
        //list not empty
        Node* prev = NULL;
        Node* curr = head;
        Node* forward = NULL;
        while(curr!=NULL){
            forward=curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
}
void print(Node* head){
    Node* temp =head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
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