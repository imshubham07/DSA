#include<bits/stdc++.h>
using  namespace std;

int main(){
    vector<int>arr = {10,1,5,7,2,9,6,7};
    int n = arr.size();

    for (int  round = 1; round < n; round++)
    {
        //step A => Fetch
        int val = arr[round];
        //step B. => Compare
        int j;
        for (  j = round - 1 ; j >= 0; j--)
        {
            if (arr[j]>val)
            {
                //step C => shifting
                arr[j+1] = arr[j];
            }
            else
            {
                //stop and exit the loop
                break;
            }
        }
        // Step D => copy 
        arr[j+1] = val;
    }
    // printing shorted array
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
    return 0;
}