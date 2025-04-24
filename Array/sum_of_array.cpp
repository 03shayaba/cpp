#include<iostream>
using namespace std;
int SUM_OF_ARRAY(int arr[] , int size){
    int sum =0;
    for(int i= 0 ; i<size;i++){
        sum = arr[i] + sum ;
    }
    return sum;
}
int main(){
 int array [5];
 int size = 5;
 cout<<"enter the array element:"<<endl;
 for(int i = 0;i<5;i++){
    cin>>array[i] ;
 }
 int res1= SUM_OF_ARRAY(array , size);
 cout<<"sum of array is :"<<res1<<endl;
}