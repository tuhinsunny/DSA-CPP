#include<iostream>
using namespace std;

class CircularQueue{
    public :
    int size;
    int *arr;
    int front;
    int rear;
    CircularQueue(int n){
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    void enqueue(int value){
        //checking if queue is full
        if((front == 0 && rear == size-1)||(rear == (front-1)%(size-1))){
            cout<<"Queue is full ! "<<endl;
            return;
        }
        //first element to be added in the queue
        else if(front == -1){
            front = rear = 0;
        }
        //rear is at the end of the queue, to maintain cyclic nature :
        else if(front != 0 && rear == size-1){
            rear = 0;
        }
        else{
            //maintain normal flow
            rear++;
        }
        arr[rear] = value;
    }
    int dequeue(){
        //checking if queue is empty
        if(front == -1){
            cout<<"Queue is empty!"<<endl;
            return -1;
        }
        int ans = arr[front];//storing the popped element
        arr[front]=-1;
        //if one element is present in the queue
        if(front == rear){
            front = rear = -1;
        }
        else if(front == size-1){
            front = 0; //to maintain the cyclic flow
        }
        else{
            front++;
        }
        return ans;
    }
    void display() {
        if(front == -1){
            cout<<"Queue is empty!"<<endl;
            return;
        }
        cout << "Queue contents: ";
        for (int i = front; i <= rear; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;  
    }
};

int main(){
    int len;
    cout << "Enter the size of the queue: ";
    cin >> len;

    CircularQueue q(len);//creating object of class Queue

    int choice, data , store;

    do {
        cout << "\nQueue Operations:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display the Queue\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter data to enqueue: ";
                cin >> data;
                q.enqueue(data);
                break;
            case 2:
                store = q.dequeue();
                if(store!=-1)
                cout << "Dequeued element: " << store << endl;
                break;
            case 3:
                q.display();
                break;
            case 4:
                cout << "Exiting.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}