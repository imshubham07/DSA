#include <bits/stdc++.h>
using namespace std;

//Q4. Transpose of a matrix in 2D array
void Transpose(int arr[][3], int row, int col, int transpose[][3])
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}

//Q3. Find max & Min in 2D Array

//int  GetMax(int arr[][3],int row, int cols){
//    int maxi = INT_MIN;
//    for (int i = 0; i < row; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            if(arr[i][j] > INT_MIN){
//               maxi  = arr[i][j];
//            }
//        }
//    }
//    return maxi;
//
//}
//int  GetMin(int arr[][3],int row, int cols){
//    int mini = INT_MAX;
//    for (int i = 0; i < row; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            if(arr[i][j] < INT_MAX){
//                mini  = arr[i][j];
//            }
//        }
//    }
//    return mini;
//
//}

////Q2. print the SUm of Array in Column wise
//void printColumnWiseSum(int arr[][3],int rows,int cols){
//
//    for (int i = 0; i < rows; ++i) {
//        int sum =0;
//        for (int j = 0; j < cols; ++j) {
//            sum = sum +arr[j][i];
//        }
//        cout<<sum<<endl;
//    }
//
//}
//Q1. print the SUm of Array in Row wise
//void printRowWiseSum(int arr[][3], int  rows ,int cols ){
//
//    for (int i = 0; i < rows; ++i) {
//        int sum =0;
//        for (int j = 0; j < cols; ++j) {
//            sum = sum +arr[i][j];
//        }
//        cout<<sum<<endl;
//    }
//
//}

int main(){






    //Q1. print the SUm of Array in Row wise
//    int arr[3][3];
//    int rows = 3;
//    int cols = 3;
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            cin>>arr[i][j];
//        }
//    }
//
//    //print Output
//
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            cout<<arr[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//
//    printRowWiseSum(arr,rows,cols);







    //Q2. print the SUm of Array in ColumnWise
//    int arr[3][3];
//    int rows = 3;
//    int cols = 3;
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            cin>>arr[i][j];
//        }
//    }
//
//    //print Output
//
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            cout<<arr[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//
//    printColumnWiseSum(arr,rows,cols);






//Q3. Find max & Min in 2D Array
//    int arr[3][3];
//    int row = 3;
//    int cols= 3;
//
//    for (int i = 0; i < row; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            cin>>arr[i][j];
//        }
//    }
//
//    for (int i = 0; i < row; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            cout<<arr[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//
//     //cout<<"printing max high number in array"<<GetMax(arr,row,cols);
//    cout<<"printing max high number in array"<<GetMin(arr,row,cols);







//Q4. Transpose of a matrix in 2D Array
    int arr[3][3];
    int row = 3;
    int col = 3;
    int transpose[3][3];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[j][i];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[j][i];
        }
        cout<<endl;
    }

    Transpose(arr, row, col, transpose);








}