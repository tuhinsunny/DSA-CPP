#include<iostream>
using namespace std;

class Node{
    public :
    int data;
    Node * next;
    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertAtHead(Node* &head, Node* &tail, int data){
    //no existing node.List empty
    if(head==NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{
        //list not empty
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }
}
void insertAtTail(Node* &head, Node* &tail, int data){
    //no existing node.List empty
    if(head==NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{
        //list not empty
        Node* temp = new Node(data);
        tail->next = temp;
        tail = temp;
    }
}
void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void deleteNode(int position, Node* &head, Node* &tail){
    //deleting the starting node
    if(position==1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
        if(prev->next==NULL)
        tail = prev;
    }
}
int main(){
    cout<<"Perform the Linked List operations : "<<endl;
    int choice,val;
    Node* head = NULL;
    Node* tail = NULL;
    do{
        cout<<"1 for Insert at begin\n2 for Insert at end\n3 for Delete\n4 for Display\n5 To exit"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice){
            case 1 :
                cout<<"Enter the value to insert : ";
                cin>>val;
                insertAtHead(head, tail, val);
                break;
            case 2 : 
                cout<<"Enter the value to insert : ";
                cin>>val;
                insertAtTail(head, tail, val);
                break;
            case 3 :
                int pos;
                cout<<"Enter the position to delete : ";
                cin>>pos;
                deleteNode(pos, head, tail);
                break;
            case 4 :
                display(head);
                break;
            case 5 :
                break;
            default :
                cout<<"Enter correct choices !!"<<endl;
        }
    }while(choice != 5);

    return 0;
}