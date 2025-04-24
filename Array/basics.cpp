#include <iostream>
using namespace std;
int main(){
    int arr[5];
    // Input values into the array
    for(int i = 0; i < 5; i++)
    {
    cout << "enter the of array:";
    cin >> arr[i] ;
    }
    // output values into the array
    cout << "the elements are" <<endl;
    for (int i = 0 ;i < 5; i++){
    cout << arr[i] << " ";
    }
   return 0;
  }
