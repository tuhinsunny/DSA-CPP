#include<iostream>
#include<unordered_map>
using namespace std;

class Node{
    public :
    int data;
    Node* next;
    Node(int d){
        this->data=d;
        this->next = NULL;
    }
};

void insertNode(Node* &tail, int element, int d){
    if(tail==NULL){
        Node* temp = new Node(d);
        tail = temp;
        temp->next = temp;
    }
    else{
        //Not empty list
        Node* curr = tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        //element found
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node* tail){
    if(tail == NULL){
        cout<<"List is empty!"<<endl;
        return;
    }
    Node* temp = tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail != temp);
    cout<<endl;
}
int getLength(Node* tail){
    Node* temp = tail;
    int c=0;
    do{
        c++;
        tail=tail->next;
    }while(tail != temp);
    return c;
}
bool isCircular(Node* head){
    if(head==NULL){
        return true;
    }
    unordered_map<Node* , bool> visited;
    Node *temp =head;
    while(temp!=NULL){
        if(visited[temp]==true)
        return true;
        visited[temp]=true;
        temp=temp->next;
    }
    return false;
}
void divideAndMakeCircular(Node* &head){
    //Storing the length of the linked list
    int lengthOfList = getLength(head);
    int mid;
    //soring the middle length of the list
    if(lengthOfList%2 ==0)
    mid= lengthOfList/2;//even case
    else
    mid= (lengthOfList/2)+1;//odd case
    Node* first = head; // Creating a new node for storing the first part of the list
    Node* last =NULL; // Creating a new node for storing the second part of the list
    //finding the first part of the list
    int cnt= 1 ;
    //traversing till the middle
    while(cnt<mid){
        first=first->next;
        cnt++;
    }
    last =first->next; //storing the head(starting) for the last part of the list
    first->next=head;//making the first part Circular
    cout<<"Printing the first part : "<<endl;
    print(first);// 3 1 2 
    //Confirming whether circular 
    if(isCircular(first))
    cout<<"First part is Circular Linked List"<<endl;
    else
    cout<<"First part is Not a Circular Linked List"<<endl;
    Node* store = last;
    //traversing the second part of the list
    while(cnt<lengthOfList-1){
        last=last->next;
        cnt++;
    }
    last->next = store; //making the list circular
    cout<<"Printing the last part : "<<endl;
    print(last);
    //Confirming whether circular 
    if(isCircular(last))
    cout<<"Second part is a Circular Linked List"<<endl;
    else
    cout<<"Second part is Not a Circular Linked List"<<endl;
}
int main(){
    Node* tail = NULL;
    insertNode(tail, 1, 1);
    insertNode(tail, 1, 2);
    insertNode(tail, 2, 3);
    insertNode(tail, 3, 4);
    insertNode(tail, 4, 5);
    insertNode(tail, 5, 6);
    print(tail);
    if(isCircular(tail))
    cout<<"The Linked list is a Circular Linked List"<<endl;
    else
    cout<<"The Linked list is Not a Circular Linked List"<<endl;
    divideAndMakeCircular(tail);
    return 0;
}
/*
Output :
1 2 3 4 5 6 
The Linked list is a Circular Linked List
Printing the first part :
3 1 2
First part is Circular Linked List
Printing the last part :
6 4 5
Second part is a Circular Linked List
*/