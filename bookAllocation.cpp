#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid){
    int studentCount=1;
    int pageSum=0;

    for(int i=0;i<n;i++){
        if(pageSum+arr[i]<=mid){
            pageSum+=arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m || mid<arr[i])
            return false;
            pageSum=arr[i];
        }
    }
    return true;
}

int allocateBooks(int arr[], int n, int m){
    int start=0,end=0,mid,ans=-1;
    for(int i=0;i<n;i++)
    end+=arr[i];
    while(start<=end){
        mid=start+(end-start)/2;
        if(isPossible(arr, n, m, mid)){
            ans=mid;
            end=mid-1;
        }
        else
        start=mid+1;
    }
    return ans;
}

int main(){
    int nbooks,nstudents;
    cout<<"Enter the number of books : ";
    cin>>nbooks;
    cout<<"Enter the number of students : ";
    cin>>nstudents;
    int pages[nbooks];
    cout<<"Enter the number of pages of the books : "<<endl;
    for(int i=0;i<nbooks;i++)
    cin>>pages[i];
    cout<<"Minimum Number of Books allocated : "<<allocateBooks(pages, nbooks, nstudents);

    return 0;
}