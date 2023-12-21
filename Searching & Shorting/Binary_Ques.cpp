#include<bits/stdc++.h>
using namespace std;

// //Q2. find Occurence the element through binary Search

// int LastOccurence(vector<int>v , int targets){
//     int s = 0;
//     int e = v.size() - 1;
//     int mid = s + (e - s)/2;
//     int ans = -1;

//     while (s<=e)
//     {
//         if ( v[mid] == targets  )
//         {
//            // ans store and than right
//            ans = mid;
//            //search right
//            s = mid + 1;
//         }
//         else if (targets < v[mid])
//         {
//             //Left Side Searching
//             e = mid - 1;
//         }
//         else if (targets > v[mid])
//         {
//             //Right side search
//             s = mid + 1;
//         }
//         mid = s + (e - s)/2;  
//     }
//     return ans;
    
// }

//Q1. find Occurence the element through binary Search
// int FirstOccurence(vector<int>arr, int target){
//     int s = 0;
//     int e = arr.size() - 1;
//     int mid = s + (e - s)/2;
//     int ans = -1;

//     while (s<=e)
//     {
//         if ( arr[mid] == target  )
//         {
//            // ans store o
//            ans = mid;
//             //search Left side
//            e = mid - 1;
//         }
//         else if (target> arr[mid])
//         {
//             //right side search
//             s = mid + 1;
//         }
//         else if (target < arr[mid])
//         {
//             //left side search
//             e = mid - 1;
//         }
//         mid = s + (e - s)/2;  
//     }
//     return ans;  
// }


int main(){

    
    //Q1. find Occurence the element through binary Search

    //  vector<int> r{1,2,3,4,4,4,4,8,8,8,8,9};
    //  int target = 4;
    //  int indexofFirstOcc = FirstOccurence(r,target);

    //  cout<< "ans is "<<indexofFirstOcc<<endl;

    // //finding firstOccurence than you can use inbuilt function 
    // auto ans2 = lower_bound (r.begin(), r.end(), 8) ;
    // cout<< "ans2 is  "<<ans2-r.begin()<<endl;







    //Q2. find Occurence the element through binary Search
    // vector<int>v{1,2,3,7,7,7,7,7,7,7,8,9};
    // int targets = 7;
    // // int indexOfLastOcc = LastOccurence(v,targets);

    // //cout<< "ans is "<<indexOfLastOcc<<endl;
    // auto ans2 = upper_bound (v.begin(), v.end(), 7) ;
    // cout<< "ans2 is  "<<ans2-v.begin()<<endl;
}