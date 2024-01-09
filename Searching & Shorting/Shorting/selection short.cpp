#include<bits/stdc++.h>
using namespace std;



int main(){
    vector<int>arr{1,5,4,78,6,47,3,5,7,9,2,7,62,4};
    int n = arr.size();

// Outer loop will run only till second last element 
    for (int i = 0; i < n-1; i++)
    {
        int minIndex = i; 
        // We will search in the next index
        for (int  j = i+1; j < n; j++)
        {
            //find min element
            if (arr[j]<arr[minIndex])
            {
                //Will store a new element when found
                minIndex = j;
            }
        }
        //swap the number with minimum element
        swap(arr[i],arr[minIndex]);
    }

//printing new shorted array
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    


}

