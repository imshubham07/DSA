#include<iostream>

using namespace std;

//linear search in 2D Array

bool FindKey (int arr[][3],int rows,int cols,int key){
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j]==key){
                return true;
            }
        }
    }
    return false;
}



// linear searching in 1D array

//bool find(int arr[], int   size, int key){
//    //linear search
//    for (int i = 0; i < size; ++i) {
//        if (arr[i]==key){
//            return true;
//        }
//    }
//    return false;
//}

int main(){



//// type1   //linear searching in 1D array
//
//    int arr[] = {2,45,7,3,2,4,67,3,34,23};
//    int size =5;
//
//    cout<<"enter the key to found: "<<endl;
//    int key;
//    cin>>key;
//
//
//    if (find(arr,size,key)){
//        cout<<" Found ";
//    }
//    else{
//        cout<<" not Found ";
//    }



    //Linear Search in 2D Array
    int arr[3][3];
    int rows = 3;
    int cols = 3;
    int key;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin>>arr[i][j];
        }
    }

    //print Output

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Enter the Value of find Number = "<<endl;
    cin>>key;

    FindKey (arr,rows,cols,key);
    cout<<FindKey(arr,rows,cols,key);

}