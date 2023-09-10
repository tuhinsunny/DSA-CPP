#include<iostream>
#include<map>
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

    //destructor
    ~Node(){
        int value= this->data;
        //memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for data "<<value<<endl;
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
        //deleting any element other than first : middle or last element
        head=head->next;
        //memory free start node
        //we had allocated the meory in heap so we need to free it manually. Eg : Line 59
        temp->next= NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt=1;
        while(cnt < position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next= curr->next;
        curr->next= NULL;
        delete curr;
        if(prev->next==NULL)
        tail=prev;//the tail will point at its proper point if the last element is deleted
    }
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
bool isCircular(Node* head){
    //Empty List
    if(head==NULL)
    return true;
    map<Node* , bool> visited;
    Node* temp = head;
    while(temp!=NULL){
        if(visited[temp]==true)
        return true;
        visited[temp]=true;
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
    if(isCircular(head))
    cout<<"Circular Linked List"<<endl;
    else
    cout<<"Not a Circular Linked List"<<endl;
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    deleteNode(99, head, tail);
    print(head);
    
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    return 0;
}