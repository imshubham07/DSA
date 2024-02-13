#include<iostream>
using namespace std;

int main(){
    
    char arr[100];

    cout<<"enter your full name"<<endl;
    // cin>>arr;
    cin.getline(arr,20);

    
    cout<<arr;


    return 0;

}