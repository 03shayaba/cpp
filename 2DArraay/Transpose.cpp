#include<iostream>
using namespace std;
 int temp[3][3] = {} ;
 int n = 3;
 void reverse(int arr[][3] ,int n){
    int start = 0;
    int end = n-1;
    for(int i = 0; i<n; i++){
        swap(arr[i][start] , arr[i][end]);
    }

   cout<<"rotating array"<<endl;
    for (int i = 0 ; i<n ; i++){
        for(int j =0; j<n ; j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    } 
 }
void transpose(int array[][3] , int n){
    int temp[3][3] = {} ;

    cout<<"printing array before transpose"<<endl;
    for (int i = 0 ; i<n ; i++){
        for(int j =0; j<n ; j++){
           cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i = 0 ; i<n ; i++){
        for(int j =0; j<n ; j++){
            temp[j][i] = array[i][j];
        }
    }
    cout<<"printing array after transpose"<<endl;
    for(int i = 0 ; i<n ; i++){
        for(int j =0; j<n ; j++){
            cout<<temp[i][j]<<" "; 
        }
        cout<<endl;
    }
    reverse(temp , n); 

}
int main(){
    
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
     transpose(arr ,n);
}