#include<iostream>
using namespace std;

////addition of two number using function
//int  add(int a , int b){
//    //adding of two number
//    int sum= a+b;
//    return sum;
//}


//    // Q2. find max number
//    int findmax(int num1, int num2, int num3){
//        if (num1>num2 && num1>num3){
//            return num1;
//        }
//        else if(num2>num1 && num2>num3){
//            return num2;
//        }
//        else{
//            return num3;
//        }
//    }


//     //printing 1 to n nubmer
//    int printcout(int n){
//        for (int i = 1; i <= n; ++i) {
//            cout<<i<<" "<<endl;
//        }
//     }


//    // student & grade Problem
//    char getGrade(int marks){
//        int per;
//        per = (marks/5);
//        if (per>=90){
//            return 'A';
//        }
//        else if (per>=80){
//            return 'B';
//        }
//        else if (per>=70){
//            return 'C';
//        }
//        else if (per>=60){
//            return 'D';
//        }
//        else{
//            return 'F';
//        }
//    }

//    // print sum of n number
//    int getsum(int n){
//        int sum = 0;
//        for (int i = 0; i <= n; ++i) {
//                sum =sum+i;
//        }
//    return sum;
//}
    int getEvensum(int n){
        int sum = 0;
    for (int i = 0; i <= n; i=i + 2)
        sum = sum + i;

    return sum;
    }




int main(){



//    // addition of two number
//    int x,b;
//    cout<<"enter the fist Number :";
//    cin>>x;
//    cout<<"enter the second Number :";
//    cin>>b;
//
//    //function calling for adding of two number
//    int sum = add(x,b);
//    cout<<"Addition result is: "<<sum<<endl;


//    //find max of three number
//    int num1 ,num2, num3, max;
//    cout<<"enter the first number: ";
//    cin>>num1;
//    cout<<"enter the second number: ";
//    cin>>num2;
//    cout<<"enter the third number: ";
//    cin>>num3;
//
//     max = findmax(num1,num2,num3);
//    cout<<max;



//    //counting of 1 to n nubmber
//    int N;
//    cout<<"enter the valule of N: ";
//    cin>>N;
//    printcout(N);
//


//    // find grade of a student
//    int marks  ;
//    cout<<"enter the marks out off 500: ";
//    cin>>marks;
//    char finalgrade = getGrade(marks);
//    cout<<finalgrade;



//    //sum of n number
//    int n;
//    cout<<"enter the number ";
//    cin>>n;
//    int ans = getsum(n);
//    cout<<"sum of "<<n<<" is "<<ans<<endl;

    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    int ans = getEvensum(n);
    cout<<"total sum of even number :"<<ans <<endl;










}