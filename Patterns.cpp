#include <iostream>

using namespace std;

// make a diffrent type of pattern

int main() {


//    // 1.  solid Rectangle
//    for (int row = 0; row < 4; row = row+1) { // outer loop  - observe  row
//        for (int col = 0; col < 6; col=col+1) { // inner loop - observe column
//            cout<<"*  ";
//        }
//        cout<<endl;
//    }



//    // 2. square pattern
//    ///outer loop
//    for (int i = 0; i < 4; i=i+1) {
//        //// inner loop
//        for (int j = 0; j < 4; j=j+1) {
//            cout<<"* ";
//        }
//        cout<<endl;
//    }



//    // 3. hollow ractangale
//    int rowcount,colcount;
//    cin>>rowcount; // input of no of row
//    cin>>colcount; // input of no of column
//    for (int row = 0; row < rowcount; row = row+1) {
//        //first row and last row :> print 5 *
//        if (  row == 0 ||  row == rowcount -1) {
//            for (int col = 0; col < colcount; col = col + 1) {
//                cout<<"* ";
//            }
//        }
//        // remaining middle rows
//        else{
//            //print 1st star
//            cout<<"* ";
//            for (int i = 0; i < colcount-2; i=i+1) {
//                cout<<"  ";
//            }
//            //last star
//            cout<<"* ";
//        }
//        cout<<endl;
//    }



//    // 4. half pyramid
//    // number of rows
//    int n;
//    cin>>n;
//    for (int row = 0; row < n; row = row + 1) {
//        for (int col = 0; col < row +1; col = col + 1) {
//            cout<<"* ";
//        }
//        cout<<endl;
//    }



//    // 5. inverted half pyramid
//    int n;
//    cin>>n;
//    for (int row = 0; row < n; ++row) {
//        // where n= total no of rows
//        for (int col = 0; col < n - row; ++col) {
//            cout<<"* ";
//        }
//        cout<<endl;
//    }

//    // 5. numeric half pyramid
//    int n;
//    cin>>n;
//    for (int row = 0; row < n; row=row+1) {
//        for (int col = 0; col < row + 1; col=col+1) {
//            cout<<col+1 ;
//        }
//        cout<<endl;
//    }


//    // 6.  inverted numerric half pyramid
//    int n;
//    cin >> n;
//    for (int row = 0; row < n; ++row) {
//        for (int col = 0; col <  n - row; ++col) {
//            cout<<col+1;
//        }
//        cout<<endl;
//    }



//    // 7. hollow inverted half pyramid
//    int n;
//    cout<<"enter the no of rows";
//    cin>>n;
//    for (int row = 0; row < n; row++)
//    {
//        for (int col = 0; col < n; col++)
//        {
//            if ( row == 0 || col == 0 || col == n-row-1)
//            {
//                cout<<"* ";
//            }
//            else
//            {
//                cout<<"  ";
//            }
//        }
//        cout<<endl;
//    }


//    // 8. full pyramid
//    int n ;
//    cin>>n;
//    for (int row = 0; row < n; ++row) {
//        int k = 0;
//        for (int col = 0; col < ((2*n)-1); col = col +1) {
//            if (col<n-row-1){
//                cout<<"  ";
//            }
//            else if (k< 2 * row +1){
//                cout<<"* ";
//                k++;
//            }
//            else{
//                cout<<"  ";
//            }
//        }
//        cout<<endl;
//    }


// not completed
//    // 8. hollow full pyramid
//    int n ;
//    cin>>n;
//    for (int row = 0; row < n; ++row) {
//        int k = 0;
//        for (int col = 0; col < ((2*n)-1); col = col +1) {
//            if (col<n-row-1){
//                cout<<"  ";
//            }
//            else if (k< 2 * row +1){
//                if (k == 0 || k == 2 * row || row == n-1b )
//                cout<<"* ";
//                else
//                    cout<<" ";
//                k++;
//            }
//            else{
//                cout<<"  ";
//            }
//        }
//        cout<<endl;
//    }
}