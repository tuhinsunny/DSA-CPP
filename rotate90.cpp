#include<bits/stdc++.h>
using namespace std;

// void rotate(int arr[][3], int m , int n){
//     int ans[3][3];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             ans[i][j]=arr[2-j][i];
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             arr[i][j]=ans[i][j];
//         }
//     }
// }

void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> arr;
        for(int i=0;i<matrix.size();i++){
            vector<int> temp;
            for(int j=0;j<matrix[0].size();j++){
                //arr[i][j]=matrix[matrix.size()-j-1][i];
                temp.push_back(matrix[matrix.size()-j-1][i]);
            }
            arr.push_back(temp);
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                matrix[i][j]=arr[i][j];
            }
        }
    }

// another approach : Transpose and Reverse rowwise

int main(){
    vector<vector<int>> arr;
    cout<<"Enter the size of the array : ";
    int m,n,temp;
    cin>>m>>n;
    cout<<"Enter the array Elements :"<<endl;
    for(int i=0;i<m;i++){
        vector<int> row;
        for(int j=0;j<n;j++){
            cin>>temp;
            row.push_back(temp);
        }
        arr.push_back(row);
    }
    rotate(arr);
    cout<<"Rotated Array : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}