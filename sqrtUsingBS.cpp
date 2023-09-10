#include<iostream>
using namespace std;

int mySqrt(int x) {
        int start=0,end=x,ans;
        long long int mid;
        while(start<=end){
            mid=start+(end-start)/2;
            if((mid*mid)==x)
                return mid;
            else if(mid*mid>x)
                end=mid-1;
            else{
                ans=mid;
                start=mid+1;
            }
        }
        return ans;
    }

double morePrecision(int n, int temp, int precision){
    double factor=1;
    double ans= temp;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    
    int tempSol=mySqrt(n);
    cout<<"Square Root is : "<<morePrecision(n, tempSol, 3);


    return 0;
}