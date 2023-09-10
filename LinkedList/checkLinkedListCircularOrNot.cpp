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
bool isCircular(Node* head){
    //Empty List
    if(head==NULL)
    return true;
    //greater than or equal to 1 wala case overlap kar raha hai
    Node* temp = head->next;
    while(temp!=NULL && temp!=head){
        temp=temp->next;
    }
    if(temp==NULL)
    return false;
    if(temp == head)
    return true;
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
    if(isCircular(tail))
    cout<<"Circular Linked List"<<endl;
    else
    cout<<"Not a Circular Linked List"<<endl;
    return 0;
}