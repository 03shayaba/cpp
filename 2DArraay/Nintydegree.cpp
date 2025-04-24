#include <iostream>
using namespace std;
void ninty_degree(int arr[][3] , int row , int col){
    cout<<"printing ninty degree element in an array"<<endl;
 for(int i = 0 ; i<col; i++){
    for(int j = row-1; j>=0; j--){
        cout<<arr[j][i] <<" ";
    }
    cout<<endl;
 }
}
void printing_arr(int arr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[3][3];
    cout << "enter the array element :";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }

    printing_arr(arr);
    ninty_degree(arr , 3,3);
    return 0;
}