#include<bits/stdc++.h>
using namespace std;

//  Q5. Find Square Root of a number Using Binary Search
int findSqrt(int n){
    int target = n;
        int start = 0;
        int end = n;
        int mid = start + (end - start)/2;
        int ans = -1;


        while (start<=end)
        {
            if (mid*mid == target)
            {
                //Return ans;
                return mid;
            }
            else if (mid*mid > target)
            {
                // Left side Search
                end = mid - 1;

            }
            else {
                ans = mid;
                //right side serarch
                start = mid + 1;
            }
            mid = start + (end - start)/2;
        }
        return ans;
    }


// //Q3 find  the Peak Index in mountain in Array

// int findPeakIndex(vector<int>arr){
//     int s = 0;
//     int e = arr.size() - 1;
//     int mid = s + (e - s)/2;


//     while(s < e){
//         if (arr[mid] < arr[mid + 1]){
//             //right side search
//             s = mid + 1;
//         }
//         else{
//             e = mid;
//         }
//         mid = s + (e - s)/2;
//     }
//     return s;
// }

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



    //Q3. find total occurence of element 


    // vector<int>arr{2,4,4,4,4,4,4,6,8,10};

    // //find first Occurence
    // auto temp = lower_bound(arr.begin(), arr.end(), 4);
    // int FirstOccr = temp - arr.begin();

    // // find last Occurence
    // auto temp2 =  upper_bound(arr.begin() , arr.end() , 4);
    // int LastOccr = temp2 - arr.begin();

    // //finding total Occurence
    // int TotalOccr = LastOccr - FirstOccr + 1;

    // cout<<"the total Occurence is  "<<TotalOccr<<endl;




    //Q4. find  the Peak Index in mountain in Array
    
    // vector<int>arr{0,1,0};
    //     int r =  findPeakIndex(arr);
    //     cout << "Peak Element is "<<r<<endl;




    // Q5. Find Square Root of a number Using Binary Search
    int n;
    cout<<"Enter the Number "<<endl;
    cin>>n;

    int ans = findSqrt(n);
    cout<<"Ans is "<<ans<<endl;

    int precision;
    cout<<"enter the number of floating digits in precism "<<endl;
    cin >>precision;
    double step = 0.1;
    double Finalans = ans;

    // it will be decide by precision at how many time this loop will be run
    for (double i = 0; i < precision; i++)
    {
        //find Ans precision
        for (double j = Finalans;  j*j<=n; j = j + step)
        {
            Finalans = j;
        }
        step = step/10;
    }
    cout<< "final ans = "<< Finalans << endl;


    return 0;
    

}