#include<iostream>
using namespace std;

int fact(int n)
{
    int pro=1;
    for(int i=1;i<=n;i++){
        pro=pro*i;
    }
    return pro;
}

int main(){
    int n,r;
    cin>>n>>r;
    double ans=0.0;
    ans=fact(n)/(fact(r)*fact(n-r));
    cout<<ans;
    return 0;
}