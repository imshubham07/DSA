#include <iostream>
#include<vector>
#include<climits>

using namespace std;

////Q1.
//int findUnique(vector<int>arr){
//    cout<<"function called"<<endl;
//    int ans = 0;
//    cout<<"searching Unique element"<<endl;
//    for (int i = 0; i < arr.size(); ++i) {
//        ans = ans^arr[i];
//    }
//    cout<<"unique element found!!!"<<endl;
//    return ans;
//}

int main() {


//// Q1.   // find unique Element
//    int n;
//    cout<<"Enter the size of array "<<endl;
//    cin>>n;
//
//    vector<int>arr(n);
//    cout<<"enter the element "<<endl;
//
//    for (int i = 0; i < arr.size(); ++i) {
//        cin>>arr[i];
//    }
//    cout<<"function calling "<<endl;
//    int uniqueElement = findUnique(arr);
//    cout<<"Unique element is "<<uniqueElement <<endl;

// Q2/   //union of two array
//    int arr []= {1,2,3,8,9,4};
//    int sizea = 6;
//    int brr[] = {5,6,7};
//    int sizeb = 3;
//
//    vector<int>ans;
//    // pushing the first element
//    for (int i = 0; i < sizea; i++) {
//        ans.push_back(arr[i]);
//
//    }
//    // pushing the 2nd element
//    for (int i = 0; i < sizeb; i++) {
//        ans.push_back(brr[i]);
//    }
//
//    //printing ans
//    for (int i = 0; i < ans.size(); ++i) {
//        cout<<ans[i];
//    }


//Q3.    //INTERSECTION
//    vector<int>arr{1,2,3,3,4,5,6,8};
//    vector<int>brr{3,3,4,10};
//
//
//    vector<int> ans;
//
//
//    //outer loop on arr vector
//    for (int i = 0; i < arr.size(); ++i) {
//        int element = arr[i];
//        //for every element , run loop on brr
//        for (int j = 0; j < brr.size(); ++j) {
//            if (element == brr[j]){
//                    brr[j]= INT_MIN;
//                ans.push_back(element);
//            }
//        }
//    }
//    //print ans
//    for (auto value: ans) {
//        cout<<value<<" ";
//
//    }


//Q4.    // Pair Sum
//    vector<int>arr{ 10,20,40,60,70 };
//
//    int sum = 60;
//
//
//    //print all pairs
//    // outer loop will traverse for each element
//    for (int i = 0; i < arr.size(); i++) {
////        cout<<"we are at element: "<<arr[i]<<endl;
//        int element = arr[i];
//
//        //for every element, will triverse on aage wale element
//        for (int j = i+1; j < arr.size(); j++) {
////            cout<<"pair "<<element<<"with "<<arr[j
////             ]<<endl;
////            cout<<"("<<element<<","<<arr[j]<<")"<<endl;
//            if (element + arr[j] == sum) {
//                cout << "Pair found" << element << "," << arr[j] << endl;
//            }
//        }
//    }

//Q5.    // triplate sum
//    vector<int>arr{10,20,30,40};
//    int sum = 80;
//
//
//    for (int i = 0; i < arr.size(); i++) {
//        int element = arr[i];
//
//        for (int j = i+1; j < arr.size(); j++) {
//            int element2 = arr[j];
//
//            for (int k = j+1; k < arr.size(); k++) {
//                int element3 = arr[k];
//
//                if(element + element2 + element3 == sum){
//                    cout<<"pair found"<<element<<","<<element2<<","<<element3<<endl;
//                }
//
//            }
//
//        }
//    }


//Q6.    //short 0`s and 1`s;
    vector<int>arr{0,1,1,0,1,0,1,0,1,0,0,0};

    int start = 0;
    int end = arr.size()-1;
    int i = 0 ;

//    while (i<arr.size()) //found some error while condition
        while (i!=end){
        if (arr[i] == 0){
            //swap from left
            swap(arr[start],arr[i]);
            start ++;
            i++;
        } else{
            //swap from right
            swap(arr[i],arr[end]);
            end --;
        }
    }

    //print
    for(auto value: arr){
        cout<<value<<" ";
    }



        return 0;
}
