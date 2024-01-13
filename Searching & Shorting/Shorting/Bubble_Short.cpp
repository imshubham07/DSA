#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr{10, 20, 4, 6, 8, 5, 2, 1, 3};
    int n = arr.size();

    
    // If we start loop 0 then we will have to do (round-1) instead of round.
    for (int round = 1; round < n; round++)
    {
        bool swapped = false;
        // compression between two elements
        for (int j = 0; j < n - round; j++)
        {
            //compare two element
            if (arr[j] > arr[j + 1])
            {
                swapped = true;
                //swaping the element
                swap(arr[j],arr[j+1]);
            }
        }
        if (swapped == false )
        {
            //Array is shorted no need to cheak to further round
            break;
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}