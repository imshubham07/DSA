#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int size,int target){
    int start = 0;
    int end = size-1;

    int mid = start + (end - start)/2;

    while (start<=end )
    {
        int element = arr[mid];
        if (element == target)
        {
            //element Found on target
            return mid;
        }
        else if (target<element)
        {
            //Search in Left side 
            end = mid - 1;
        }
        else{
            //search in Right side
            start = mid +1;
        }
        mid = (start + end )/2;
    }
    //Element not found than Returning -1
    return -1;
    
}


int main(){
    //  int arr[]= {1,2,3,4,5,6,7,8,9,10};
    //  int target = 5;
    //  int size = 10;



    //  int indexOfTarget = binarySearch(arr,size,target);
     

    //  if (indexOfTarget == -1){
    //      cout<<"Element not found";
    //  }
    //  else{
    //      cout<<"Target found at "<<indexOfTarget<<"index"<<endl;
    //  }

    vector<int>v {1,2,3,4,5,6};
    int arr[] = {1,2,3,4,5,6,7};
    int size = 7;



    //binary_search use in cpp than you must be include (<algorithm>) header file
    if (binary_search(arr, arr + size ,7))
    {
        cout<<"found"<<endl;
    }
    else
    {
        cout<<"not Found"<<endl;
    }
    
    
}