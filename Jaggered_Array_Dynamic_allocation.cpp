/*
What is a Jagged Array?
A jagged array is an array of arrays such that member arrays can be of different sizes,
in 2D array terms for each row we can have a variable number of columns.
These types of arrays are also known as Jagged arrays.

arr[3][] = 1 2 3 4        // arr[0][4] : 1st row have 4 columns
           5 6            // arr[1][2] : 2nd row have 2 columns
           7 8 9          // arr[2][3] : 3rd row have 3 columns
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cout << "Enter row size : ";
    cin >> row;
    int* col = new int[row];
    int **arr = new int *[row];

    // creating a 2d array
    for (int i = 0; i < row; i++)
    {
        cout << "Enter the column size for row " << (i + 1) << " ";
        cin >> col[i];
        arr[i] = new int[col[i]];
    }

    // taking inpout
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col[i]; j++)
        {
            cin >> arr[i][j];
        }
    }
    // output
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col[i]; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //releasing memory
    for(int i = 0; i < row; i++){
        delete [] arr[i];
    }

    delete [] arr;
    delete [] col;

    return 0;
}