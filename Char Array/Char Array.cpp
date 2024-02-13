#include<bits/stdc++.h>
using namespace std;

int main(){
    // char name[100];
    // cout<<"Enter Your Name :"<<endl;

    // cin>>name;

    // cout<<"Apka naam: "<<name << " hai"<<endl;

    // char ch[1000];
    // ch[0] = 'a'; 
    // ch[1] = 'b';
    // cin>> ch[2];

    // cout<<ch[1]<<ch[0]<< ch[2]<<endl;



    char name[100];
     
     cin>> name;
     
     for (int i = 0; i < 7; i++)
     {
        cout<<"index: "<<i<<" value: "<< name[i]<< endl;
     }
    
    // yaha pe null char ko int me convert karunga
    int value = (int)name[6];
    cout<<"value: "<<value<<endl;




    return 0;
}