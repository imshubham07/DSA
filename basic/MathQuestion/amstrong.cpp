#include<bits/stdc++.h>
using namespace std;
class amstrongChecker{
    public:
    static bool isArmstrong(int n){
        int orginalNum = n;
        int sum = 0;
        while (n!=0)
        {
            int lastDigit=n%10;
            sum = sum +(lastDigit*lastDigit*lastDigit);
             n = n/10;
        }
        return orginalNum==sum;
        
    }
    
};

int main(){
    int number ;
    cin>>number;
    if(amstrongChecker::isArmstrong(number)){
        cout<< "is an Amstrong number."<< endl;
    }else{
        cout<< "is not An amstrong Number."<<endl;
    }
}