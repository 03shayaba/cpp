#include<iostream>
using namespace std;
int get_pivot(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int main()
{
    int arr1[5] = {3, 8, 1, 17, 2};
    // int result = get_pivot(arr, 5);
    cout << "the pivot element at index is" << get_pivot(arr1, 5) << endl;
}