#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr{10, 20, 4, 6, 8, 5, 2, 1, 3};
    int n = arr.size();

    // If we start the loop from 0, then wherever there is round, we will have to do (-1)
    for (int round = 1; round < n; round++)
    {
        // compression between two elements
        for (int j = 0; j < n - round; j++)
        {
            //compare two element
            if (arr[j] > arr[j + 1])
            {
                //swaping the element
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}