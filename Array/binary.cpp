#include <iostream>
using namespace std;

int binary_search(int arr[], int key, int size)
{
  int s = 0;
  int e = size - 1;
  int mid = (s + e) / 2;
  while (s <= e)
  {
    if (arr[mid] == key)
    {
      return mid;
    }
    if (arr[mid] > key)
    {
      e = mid - 1;
    }
    else
    {
      s = mid + 1;
    }
    mid = (s + e) / 2;
  }
  return -1;
}
int main()
{
  int even[5] = {1, 2, 3, 4, 5};
  // int key = 3 ;
  // int size = 5;
  int result = binary_search(even, 5, 5);
  cout << "index is" << result << endl;
}