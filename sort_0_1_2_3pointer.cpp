#include<iostream>
using namespace std;

void sort012(int arr[], int n)
{
    int currIndex = 0;
    int left = 0;
    int right = n - 1;
    
    while (currIndex <= right)
    {
    	if (arr[currIndex] == 0) {
            swap(arr[currIndex], arr[left]);
            currIndex++;
            left++;
        }
        else if (arr[currIndex] == 1)
            currIndex++;
        else
        {
            swap(arr[currIndex], arr[right]);
            right--;
        }
    }
    cout<<"Sorted array : "<<endl ;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the array elements : "<<endl;
    int arr[10000];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort012(arr,n);
    return 0;
}