#include<iostream>
using namespace std;

class Node{
    public :
    int data;
    Node* next;
    Node* prev;

    //Constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    //destructor
    ~Node(){
        int val = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for data "<<val<<endl;
    }
};
void insertNode(Node* &tail, int element, int d){
    //empty list
    if(tail==NULL){
        Node* temp = new Node(d);
        tail=temp;
        temp->next = temp;
        temp->prev = temp;
    }
    else{
        //non empty list
        Node* temp=tail;
        while(temp->data != element){
            temp=temp->next;
        }
        //element is found
        Node* nodeToInsert = new Node(d);
        nodeToInsert->next = temp->next;
        temp->next->prev= nodeToInsert;
        temp->next = nodeToInsert;
        nodeToInsert->prev = temp;
    }

}
void print(Node* tail){
    if(tail==NULL){
        cout<<"List is Empty "<<endl;
        return;
    }
    Node* temp =tail;
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
        Node* previous = tail;
        Node* current = previous->next;
        while(current->data != value){
            previous=current;
            current=current->next;
        }
        current->prev= NULL;
        //for 1 node
        if(current==previous)
        tail=NULL;
        else if(tail==current)//for greater than equals to 2 node
        tail=previous;
        previous->next = current->next;
        current->next = NULL;
        delete current;
    }
}
int main(){
    
    Node* tail =NULL;
    insertNode(tail, 5, 3);
    print(tail);
    insertNode(tail, 3, 4);
    print(tail);
    insertNode(tail, 3, 10);
    print(tail);
    insertNode(tail, 4, 54);
    print(tail);
    deleteNode(tail, 54);
    print(tail);
    deleteNode(tail, 10);
    print(tail);
    deleteNode(tail, 3);
    print(tail);
    deleteNode(tail, 4);
    print(tail);
    return 0;
}
/*
Output :
3 
3 4
3 10 4
3 10 4 54
Memory is free for data 54
3 10 4
Memory is free for data 10
3 4
Memory is free for data 3
4
Memory is free for data 4
List is Empty
*/