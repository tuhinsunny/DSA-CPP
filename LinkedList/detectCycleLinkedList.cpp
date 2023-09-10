#include<map>
#include<iostream>
using namespace std;

class Node{
    public :
    int data;
    Node* next;//pointer of Node type

    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head , int d){
    //new node create
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail , int d){
    //new node create
    Node* temp = new Node(d);
    tail->next= temp;
    tail = temp;     
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d){
    if(position == 1){
        insertAtHead(head, d);
        return;
    }
    Node* temp = head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;//just moving temp forward
        cnt++;
    }

    //inserting at last position
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }
    //creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next= temp->next;
    temp->next= nodeToInsert;
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
bool detectLoop(Node* head){
    if(head== NULL)
    return false;
    
    map<Node* , bool>visited;
    Node* temp = head;
    while(temp!=NULL){
        //cycle is present
        if(visited[temp] == true)
        return true;

        visited[temp] = true;
        temp=temp->next;
    }
    return false;
}
int main(){
    //created a new Node
    Node* node1= new Node(10);

    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    print(head);
    insertAtTail(tail,12);
    print(head);
    insertAtTail(tail,15);
    print(head);
    insertAtPosition(tail, head, 3, 22);
    print(head);
    insertAtPosition(tail, head, 1, 7);
    print(head);
    insertAtPosition(tail, head, 6, 99);
    print(head);
    if(detectLoop(head))
    cout<<"Cycle is present"<<endl;
    else
    cout<<"Cycle is not present"<<endl;
    return 0;
}