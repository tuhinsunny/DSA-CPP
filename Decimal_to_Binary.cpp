#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    float ans=0;
    int i=0;
    while(n!=0)
    {
	    int bit=n&1;
         ans=(bit*pow(10,i))+ans;//to use pow we have to use #include<math.h>
	    n=n>>1;
        i++;
    }
    cout<<"Answer is : " <<ans<<endl;
    //we are using float because pow(10,2) gives 99.99999... if We use int iot will convert it to 99
}