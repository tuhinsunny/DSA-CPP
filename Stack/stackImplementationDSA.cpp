#include<iostream>
#include<stack>
using namespace std;

class Stack{
    //properties
    public:
        int *arr;
        int top;
        int size;

        //behavior
        //constructor
        Stack(int size){
            this->size = size;
            arr = new int[size];
            top = -1;
        }

        void push(int element){
            //checking if khaali space is available
            if(size-top>1){
                top++;
                arr[top] = element;
            }
            else{
                //khaali space not there
                cout<<"Stack Overflow !!"<<endl;
            }
        }
        void pop(){
            if(top>=0){
                top--;
            }
            else{
                cout<<"Stack Underflow!!"<<endl;
            }
        }
        int peek(){
            if(top>=0 && top<size){
                return arr[top];
            }
            else{
                cout<<"Stack Empty!!"<<endl;
                return -1;
            }
        }
        bool isEmpty(){
            if(top==-1){
                return true;
            }
            else{
                return false;
            }
        }
};

int main(){
    
    Stack st(5);
    st.push(25);
    st.push(20);
    st.push(16);
    st.push(14);
    st.push(1);
    st.push(12);

    cout<<st.peek()<<endl;//returns the top element of the stack
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    if(st.isEmpty()){
        cout<<"STack is empty mere dost!"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
    return 0;
}
/*
Output :
Stack Overflow !!
1
14
16
20
25
Stack is not empty
*/