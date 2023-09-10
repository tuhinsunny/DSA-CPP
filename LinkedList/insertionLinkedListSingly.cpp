#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    //creating pointer next of Node type;
    Node* next;

    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int d){
    //creating a new node of with data d
    Node* temp =new Node(d);
    temp->next = head;
    head=temp;
}
void insertAtTail(Node* &tail, int d){
    //creating a new node with data d
    Node* temp = new Node(d);
    tail->next = temp;
    tail=temp;;
}
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void insertAtPosition(Node* &head, Node* &tail, int position, int d){
    if(position==1){
        insertAtHead(head, d);
        return;
    }
    int cnt=1;
    Node* temp= head;
    while(cnt<position-1){
        temp=temp->next;//moving temp forward
        cnt++;
    }
    //insertion at last
    if(temp->next==NULL){
        insertAtTail(tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next=nodeToInsert;
}


int main(){
    //Creating a new Node
    Node* node1= new Node(10);
    //head pointed to node1
    Node* head =node1;
    Node* tail =node1;//tail pointed to Node1
    insertAtTail(tail, 11);
    insertAtTail(tail, 12);
    insertAtTail(tail, 13);
    insertAtTail(tail, 14);
    insertAtPosition(head, tail, 1, 99);
    print(head);
    cout<<endl;
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    return 0;
}