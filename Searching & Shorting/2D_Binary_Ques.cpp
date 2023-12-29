#include<bits/stdc++.h>
using namespace std;


//Q2. Divide 2 number Using binary Search
int solve(int divident, int diviser){
     
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
    int divident ;
    cout<<"Enter the Divident = "<<endl;
    cin>>divident;
    //take input divisor
    int diviser;
    cout<<"Enter the Diviser = "<<endl;
    cin>>diviser;

    int ans = solve(divident,diviser);



    return 0;
}