#include<bits/stdc++.h>
using namespace std;



int main(){
    vector<int>arr{1,5,4,78,6,47,3,5,7,9,2,7,62,4};
    int n = arr.size();

// Outer loop will run only till second last element 
    for (int i = 0; i < n-1; i++)
    {
        int minindex = i;
        for (int  j = i+1; j < n; j++)
        {
            if (arr[j]<arr[minindex])
            {
                //new Minimum ,than store
                minindex = j;
            }
        }
        //swap
        swap(arr[i],arr[minindex]);
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    


}

