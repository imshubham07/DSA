#include<bits/stdc++.h>
using namespace std;


int main(){

    //Easiest way to declare 2D vector
    // vector<vector<int> >arr;

    // vector<int> a{1,2,3};
    // vector<int> b{4,5,6};
    // vector<int> c{7,8,9};

    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     //arr[0] is  zero tab hoga sab row or colum same hoga nahi to arr[i] use karna padega
    //     for (int j = 0; j < arr[i].size(); j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    //Dificult way to declare 2D vector

    int row = 5;
    int col = 5;
    vector<vector<int> >arr(row,vector<int>(col,-8));


    // printing the 2D vector
    for (int i = 0; i < arr.size(); i++)
    {
        //arr[0] is  zero tab hoga sab row or colum same hoga nahi to arr[i] use karna padega
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
    
}