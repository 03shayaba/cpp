#include <iostream>
using namespace std;
int peak_elem(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int main()
{
    int arr1[6] = {3, 4, 2, 8, 11, 13};
    int result = peak_elem(arr1 , 6);
    cout << "the peak element index is" << result << endl;
}