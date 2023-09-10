#include<iostream>
using namespace std;

int occur(int arr[], int len, int key,bool first){
    int ans=-1,start=0,end=len-1,mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==key){
            ans=mid;
            if(first)
            end=mid-1;
            else
            start=mid+1;
        }
        else if(arr[mid]>key)
        end=mid-1;
        else
        start=mid+1;
    }
    return ans;
}

int main(){
    int n,k;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Enter the Key : ";
    cin>>k;
    int firstocc=occur(arr, n, k, true);
    int lastocc=occur(arr, n, k, false);
    cout<<"First and last occurence of "<<k<<" is "<<firstocc<<" and "<<lastocc<<endl;
    cout<<"Total Nummber of occurences : "<<(lastocc-firstocc+1);

    return 0;
}