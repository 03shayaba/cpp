#include <iostream>
using namespace std;
void rotate_arr(int arr[], int size, int k)
{
    for (int j = 0; j < k; j++)
    {
        int temp =arr[j];
        {
            for (int i = 0; i < size; i++)
            {
                arr[i] = arr[i + 1];
            }
            arr[size - 1 ] = temp;
        }
    }
        cout << "rotated array is" << endl;
        for (int i = 0; i < size; i++)
        {

            cout << arr[i] << " ";
        }
    
}
    int main()
    {
        int arr[4] = {1, 7, 9, 11};
        int k = 3;
        rotate_arr(arr, 4, k);
        return 0;
    }