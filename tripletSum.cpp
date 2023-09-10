#include<iostream>
#include<climits>
using namespace std;

int main(){
    cout<<"Enter the size of the Array : ";
    int n,num;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the Array : "<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Enter the target number : ";
    cin>>num;
     for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				for(int k=j+1;k<n;k++){
					if((arr[i]+arr[j]+arr[k])==num){
                        cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                        arr[i]=INT_MIN;
                        arr[j]=INT_MIN;
                        arr[k]=INT_MAX;

					}
				}
			}
		}

    return 0;
}