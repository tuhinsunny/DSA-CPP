#include<iostream>
using namespace std;
int findLargestMinDistance(vector<int> &boards, int k) {
    int start=0,end,mid,ans=-1;
    for(int i=0;i<boards.size();i++)
    end+=boards[i];
    while(start<=end){
        mid=start+(end-start)/2;
        if(isPossible(boards,k,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}
bool isPossible(vector<int> &arr , int k, int mid){
    int npointers=1;
    int areaSum=0;
    for(int i=0;i<arr.size();i++){
        if(areaSum+arr[i]<=mid){
            areaSum+=arr[i];
        }
        else{
            npointers++;
            if(npointers>k || arr[i]>mid){
                return false;
            }
            areaSum=arr[i];
        }
    }
}
int main(){
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