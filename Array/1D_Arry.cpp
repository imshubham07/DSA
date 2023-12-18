#include<iostream>
using namespace std;


void printArray( int arr[],int size){
    for (int i = 0; i < size; ++i) {
        cout<<arr[i]<<" ";
    }
    cout <<endl;
}

void inc(int arr[],int size){
    arr[0]= arr[0]+10;
    printArray(arr,size);
}

int main(){

    //Array and Function
    int arr[] = {5,6};
    int size = 2;
    
    inc(arr,size);
    printArray(arr,size);













    //creating a array
    //int arr[57];
    //char arr[106];
    //bool arr[34];
    //cout<<"array created sucessfully"<<endl;

    //Initialisation of array
//    int arr1[10]={2,4,5,25,56,};
//    char arr2[] = {'a','b','c'};
//
//    cout<<"array initialised sucessfully"<<endl;

//    int arr[]={2,4,5,25,56,};
//
//    //printing all value
//    for (int i = 0; i < 5; i++) {
//        cout<<arr[i]<<" ";
//    }


    // Taking input in array
//    int arr[5];
//    for (int i = 0; i < 5; ++i) {
//        cin>>arr[i];
//    }

}