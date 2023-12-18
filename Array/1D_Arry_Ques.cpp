#include<iostream>
#include<climits>
#include<vector>

using namespace std;



int main(){


//    // Taking input in Array  and print the output  of double number
//
//    int arr[500];
//
//    int n;
//    cout<<"How many number you want to add in array "<<endl;
//    cin>>n;
//
//    cout <<"enter the number : ";
//    for (int i = 0; i < n; ++i) {
//        cin>>arr[i];
//    }
//
//    //print doubles of number
//    cout <<"doubles: ";
//    for (int i = 0; i < n; ++i) {
//        cout<<2*arr[i] <<" "<<endl;
//    }

//    //  triversing of an array
//    int arr[5] = {2,3,4,5,6};
//
//    for (int i = 0; i < 5; i++) {
//        arr[i]=1;
//    }
//    for (int i = 0; i < 5; i++) {
//        cout<<arr[i]<<" ";
//    }




//    int arr[10] = {1,2};
//
//    for (int i = 0; i < 10; i++) {
//        cout<<arr[i] << " ";
//
//    }




//    int arr[10] ;
//
//    for (int i = 0; i < 10; i++) {
//        cout<<arr[i] << " ";
//
//    }


//    //cout 0's and 1's in Array
//    int arr[]={1,0,0,0,1,1,1,1,0,0,0,0,0};
//
//    int size = 13;
//    int numZero =0;
//    int numOne = 0;
//
//    for (int i = 0; i < size; ++i) {
//        // if zero found , increment numbZero
//        if (arr[i]==0){
//            numZero++;
//        }
//        // if one found , increment numOne
//        if (arr[i]==1){
//            numOne++;
//        }
//    }
//    cout<<"number of zeros: "<<numZero<<endl;
//    cout<<"number of ones: "<<numOne<<endl;


//    //find max number
//    int arr[]={32,6,65,2,6,5,2,5,3,52,6,2,6,5,3};
//    int size = 15;
//    int max = INT_MIN;
//    for (int i = 0; i < size; ++i) {
//        if (arr[i]>max){
//            max=arr[i];
//        }
//    }
//    cout <<"maximum number is "<<max<<endl;



//    // find minimum number in array
//    int arr[]={2,58,-6,8,97,3,4,7,8,1,72,2,1};
//    int size = 13;
//    int min = INT_MAX;
//    for (int i = 0; i < size; ++i) {
//        if(arr[i]<min){
//            min = arr[i];
//        }
//    }
//    cout<<"the minimum number is "<<min<<endl;





//    // Extreme print in array
//
//    int arr[8] = {10,20,30,40,50,60,70};
//    int size = 8;
//
//    int start = 0;
//    int end = size-1;
//
//    while(start<=end){
//        if (start>end)
//            break;
//
//        if (start==end){
//            cout<<arr[start]<<" ";
//        }
//        else {
//            cout<<arr[start]<<" ";
//            cout<<arr[end]<<" ";
//        }
//
//        start++;
//        end--;


        //reverse of  an array
        int arr[6]= {10,20,30,40,50,60,};
        int size = 6;
        int start = 0;
        int end =size-1;

        while(start<=end){
            //Step1
            swap(arr[start],arr[end]);
            //step2
            start++;
            //step3
            end--;
        }
        //print reverse array
    for (int i = 0; i < size; ++i) {
        cout<<arr[i]<<" " ;
    }
}