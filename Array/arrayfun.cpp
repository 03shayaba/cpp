#include<iostream>
#include<limits.h>
using namespace std;

void printArray( int arr[] , int size){
    cout<<"printitng the array" << endl;
    for(int i = 0 ; i<= size; i++){
        cout << arr[i] <<" ";
    }
    cout<<"printing DONE ";
}
int main(){
    int n = 15;
    int third[15] = {1,2,3,4};
    printArray(third , 15);
    int thirdsize = sizeof(third)/sizeof(int);
    cout<<"the size of third array is:"<<thirdsize<<endl;
    cout<<INT_MAX<<endl;
    cout<<INT_MIN;  
}