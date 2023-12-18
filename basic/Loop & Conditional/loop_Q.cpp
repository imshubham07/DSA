#include<iostream>
using namespace std;


int main(){

//// print digit of a number
//    // eg:- i/p=625
//    //      o/p=5,2,6
//    int i;
//    cout<<"enter the number : ";
//    //using while loop
//    cin>>i;
//    while(i!=0){
//        int rem=i%10;
//        cout<<rem<<" "<<endl;
//        i=i/10;
//    }



//// joint number of digts
//    int digit[4] ={8,2,4,5};
//    int ans = 0;
//    for (int i = 0; i < 4; ++i) {
//        ans = ans * 10 + digit[i];
//    }
//    cout<<ans <<endl;


////count the no of  set bits
//    int n;
//    cout<<"enter the nuber : ";
//    cin>>n;
//    int ans =0;
//    while(n!=0){
//        //found one set bit,
//        //so increment set bits count
//        if (n&1){
//            ans++;
//        }
//        //right shift
//        n=n>>1;
//    }
//    cout <<" Number of set bits are : "<<ans;

////   convert KM to Miles
    int km;
    cout<<"enter the value in km: "<<endl;
    cin>>km;

    cout<<"value in miles is "<<(1/1.609)*km<<endl;
}