#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>> n;

    // 2D array creation
    int **arr = new int*[n] ;
    for(int  i = 0 ; i<n ; i++){
        arr[i] = new int[n];
    }
    // done by dynamic allocation
    for(int  i = 0 ; i<n ; i++){
        for(int  j =0 ; j<n ; j++){
            cin>>arr[i][j];
        }

    }
    for(int  i = 0 ; i<n ; i++){
        for(int  j =0 ; j<n ; j++){
            cout<<arr[i][j] <<" ";
        }
    cout<<endl;
    }

    // releasing memories all column
    for(int  i = 0 ; i<n ; i++){
       delete [] arr[i];
    }

    // releasing all rows
    delete []arr ;
    return 0;
}