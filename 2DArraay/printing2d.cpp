#include<iostream>
#include<limits.h>
using namespace std;
// largest row sum
void largest_row_sum(int arr[][4]){
    int max = INT_MIN;
    int rowIndex = -1;
    for(int i =0; i<3;i++){
        int sum =0;
        for(int j =0 ; j<4;j++){
            sum += arr[i][j];
        }
        if(sum>max){

            max = sum;
            rowIndex = i;
        }
       
    }
    cout<<"the largest sum is:"<<max;
    cout<<"the row index is"<<rowIndex;

}
// row wise sum
int sum_arr_row(int arr[][4]){
    cout<<"printing sum  row wise:";
    for(int j =0 ; j<4;j++){
        int sum =0;
        for(int i =0; i<3;i++){
            sum += arr[i][j];
        }
        cout<<sum <<endl;
    }
}
// colum wise sum
int sum_arr_col(int arr[][4]){
    cout<<"printing sum column wise :";
    for(int i =0; i<3;i++){
        int sum =0;
        for(int j =0 ; j<4;j++){
            sum += arr[i][j];
        }
        cout<<sum <<endl;
    }
}
// printing array through the inputs
void printing_arr(int arr[][4]){
    for(int i =0; i<3;i++){
        for(int j =0 ; j<4;j++){
            cout<<arr[i][j]<<endl;
        }
        cout<<endl;
    }
}
// main function
int main(){
    int arr[3][4];
    cout<<"enter the array element :";
    for(int i =0; i<3;i++){
        for(int j =0 ; j<4;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
   
    printing_arr(arr);
    sum_arr_row(arr);
    sum_arr_col(arr);
    largest_row_sum(arr);
    return 0;
}