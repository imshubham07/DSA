#include<bits/stdc++.h>
using namespace std;


//Q2. Divide 2 number Using binary Search
int solve(int dividend, int diviser){
     int s = 0;

     //the absolute value of an integer number. If the number is negative, it will return the positive value
     int e = abs(dividend);
     int ans = INT_MIN;
     int mid  =  s + (e - s)/2;

     while (s<=e)
     {
        //Perfect solution 
        if (abs(mid*diviser) == abs(dividend))
        {
            ans = mid; 
            
        }
        // Not Perfect Solution
        if (abs(mid*diviser) > abs(dividend))
        {
            //search in the left side
            e =  mid -1;
        }
        else
        {
            //first store the ans than search in the right side
            ans = mid;
            // Search in the left side
            s = mid + 1;
        }
        mid = s + (e - s)/2; 
     }
     if ((diviser <0 && dividend<0) || (diviser >0 && dividend>0))
     {
        return ans;
     }
     return -ans ;
}







//Q1. Find Nearly shorted array
// int binarySearch(vector<int>arr, int target){
//     int s = 0;
//     int e = arr.size() - 1;
//     int mid = s + (e - s)/2;

//     while (s<=e)
//     {
//         if (arr[mid] == target)
//         {
//             return mid;
//         }
//         // out off bound ho jaye
//         else if ( mid + 1 < e && arr[mid + 1] == target)
//         {
//             return mid+1;
//         }
//         // 
//         else if (mid - 1 >= s && arr[mid - 1] == target)
//         {
//             return mid-1;
//         }
//         else if (arr[mid]<target)
//         {
//             //Right Side Search
//             s = mid + 2;
//         }
//         else
//         {
//             //Left Side Search
//             e = mid - 2;
//         }
//         mid = s + (e - s)/2; 
//     }
    
//     return -1;
// }

int main(){

    //Q1. Find Nearly shorted array
    //   vector<int>arr{10,3,40,20,50,80,70};
    //   int target = 50;

    //   int ans = binarySearch(arr,target);
    //   cout<<"index of "<<target<<" is "<<ans<<endl;





    //Q2. Divide 2 number Using binary Search

    //take input divident
    int dividend ;
    cout<<"Enter the Dividend = "<<endl;
    cin>>dividend;
    //take input divisor
    int diviser;
    cout<<"Enter the Diviser = "<<endl;
    cin>>diviser;

    int ans = solve(dividend,diviser);

    cout<< "Ans is => "<<ans<<endl;
//FIND PRISION OF THIS IS qUESTION








    //  
    return 0;
}