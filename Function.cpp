#include<iostream>
using namespace std;

void printName(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cout<<"how to make function "<<endl;
    }
}

int main(){
    //function calling
    printName();
}