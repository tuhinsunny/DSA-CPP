#include<iostream>
using namespace std;

void update(int n){
    n++;//while printing it will print 5
}

void update2(int& n){
    n++; // While printing it will print 6
}

int main(){
    /*
    int i=5;
    int& j=i;//creating a reference variable
    cout<<i<<endl;//5
    i++;
    cout<<i<<endl;//6
    j++;
    cout<<i<<endl;//7
    cout<<j<<endl;//7
    */
   int n=5;
   cout<<"Before Update : "<<n<<endl;
   update2(n);
   cout<<"After Update : "<<n<<endl;


    return 0;
}