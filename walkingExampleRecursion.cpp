#include<iostream>
using namespace std;

void reachHome(int src, int dst){
    cout<<"Source "<<src<<" Destination "<<dst<<endl;
    if(src==dst){
        cout<<"Ghar pahuch gaya"<<endl;
        return;
    }

    //processing
    src++;
    return reachHome(src,dst);
}

int main(){
    int destination=10;
    int source=1;
    reachHome(source,destination);
    return 0;
}