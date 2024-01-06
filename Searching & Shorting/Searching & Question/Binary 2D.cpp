#include<iostream>
using namespace std;


bool binarySearch(int arr[][4], int rows, int cols, int target){
    int s = 0;
    //Find ending Element of an 2D Array 
    int e  = rows*cols - 1;
    int mid = s + (e - s)/2;

    while (s<=e)
    {
        //Finding row Index
        int rowsIndex = mid/cols;
        //finding Column Index
        int colsIndex = mid%cols;


        if (arr[rowsIndex][colsIndex]== target)
        {
            cout <<"Found at"<< rowsIndex << " " <<colsIndex << endl;
            // Element Found
            return true;
        }
         if (arr[rowsIndex][colsIndex] < target)
        {
            // Element Searching in right Side
            s = mid + 1;
        }
        else
        {
            // Element Searching in Left Side
            e = mid - 1;
        }
        mid = s + (e - s )/2; 
    }

    return false;
    
}

int main(){

    int arr[5][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};

    int row = 5;
    int cols = 4;
    
    int target = 19;

    bool ans  = binarySearch(arr,row,cols,target);

    if(ans){
        cout<<"Found "<<endl;
    }
    else{
        cout<<"Not Found!! "<<endl;
    }


    return 0;
}