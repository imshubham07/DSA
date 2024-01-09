#include<bits/stdc++.h>
using namespace std;



int main(){
    vector<int>arr{1,5,4,78,6,47,3,5,7,9,2,7,62,4};
    int n = arr.size();

// Outer loop -> (n-1) round
    for (int i = 0; i < n-1; i++)
    {
        int minIndex = i; 
        // Inner loop -> index of minimum element in range loop
        for (int  j = i+1; j < n; j++)
        {
            //find min element
            if (arr[j]<arr[minIndex])
            {
                //new minimum, than store
                minIndex = j;
            }
        }
        //swap 
        swap(arr[i],arr[minIndex]);
    }

//printing new shorted array
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    


}

