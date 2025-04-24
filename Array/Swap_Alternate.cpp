#include<iostream>
using namespace std;
void printArray(int arr[], int n){
    for(int i =0 ;  i<n ;  i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void Sorted_alternate(int arr[] , int size){
    for(int i =0 ;  i<size ;  i+=2){
        if(i+1 <size){
            swap(arr[i], arr[i+1]);
        }
    }
   
}
int main(){
    int even[6]= {1,2,3,4,5,6};
    int odd[5]= {1,8,4,9,2};
    int size1 = 6;
    int size2 = 5;
     Sorted_alternate(even,size1);
     printArray( even , size1);
     Sorted_alternate(odd,size2) ;
     printArray( odd , size2);
}