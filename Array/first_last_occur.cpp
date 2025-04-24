#include <iostream>
using namespace std;

int first_occur(int arr1[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (key == arr1[mid])
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr1[mid])
        {
            s = mid + 1;
        }
        else if (key < arr1[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int last_occur(int arr1[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (key == arr1[mid])
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr1[mid])
        {
            s = mid + 1;
        }
        else if (key < arr1[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int arr[7] = {1, 1, 2, 2, 2, 3, 3};
    int result1 = first_occur(arr, 7, 2);
    int result2 = last_occur(arr, 7, 2);
    cout << "the index of 2 at first occurence is" << result1 << endl;
    cout << "the index of 2 at  last occurence is" << result2 << endl;
}