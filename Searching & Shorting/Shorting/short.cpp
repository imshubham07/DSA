#include<bits/stdc++.h>
using namespace std;


// in C++ have inbuilt function for shorting

int main(){
    vector<int>arr =  {10,5,5,7,55,3,6,7,121,8,1};

    sort(arr.begin(), arr.end());

    for (int  i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}