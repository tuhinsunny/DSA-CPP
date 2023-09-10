#include<bits/stdc++.h>
using namespace std;
class Queue{
    
    int *arr;
    int size;
    int qfront;
    int rear;
    public :

    Queue(int len) {
        size = len;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }


    bool isEmpty() {
        if(qfront == rear)
        return true;
        else
        return false;
    }

    void enqueue(int data) {
        if(rear == size)
        cout<<"Queue is full!!"<<endl;
        else{
            arr[rear] = data;
            rear++;
        }
    }
    int dequeue() {
        if(qfront==rear){
            return -1; //Queue is Empty
        }
        else{
            int ans = arr[qfront];
            arr[qfront]=-1;
            qfront++;
            if(qfront == rear){
                // If qfront and rear become equal, it means all elements have been dequeued.
                // In this case, we reset both indices to 0 to represent an empty queue.
                qfront =0;
                rear =0;
            }
        return ans;
        }
    }

    int front() {
        if(qfront == rear){
            return -1;//Empty queue
        }
        else
        return arr[qfront];
    }
    void display() {
    if (isEmpty()) {
        cout << "Queue is empty.\n";
    } else {
        cout << "Queue contents: ";
        for (int i = qfront; i < rear; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

};

int main() {
    int len;
    cout << "Enter the size of the queue: ";
    cin >> len;

    Queue q(len);//creating object of class Queue

    int choice, data;

    do {
        cout << "\nQueue Operations:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Front\n";
        cout << "4. Check if empty\n";
        cout << "5. Display the Queue\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter data to enqueue: ";
                cin >> data;
                q.enqueue(data);
                break;
            case 2:
                if (q.isEmpty()) {
                    cout << "Queue is empty. Cannot dequeue.\n";
                } else {
                    cout << "Dequeued element: " << q.dequeue() << endl;
                }
                break;
            case 3:
                if (q.isEmpty()) {
                    cout << "Queue is empty.\n";
                } else {
                    cout << "Front element: " << q.front() << endl;
                }
                break;
            case 4:
                if (q.isEmpty()) {
                    cout << "Queue is empty.\n";
                } else {
                    cout << "Queue is not empty.\n";
                }
                break;
            case 5:
                q.display();
                break;
            case 6:
                cout << "Exiting.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}