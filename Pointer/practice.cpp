#include <iostream>
using namespace std;
void square(int *p){
 int a = 10;
 p = &a;
 *p = (*p) * (*p);
}


int main()
{
//   float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
//   float *ptr1 = &arr[0];
//   float *ptr2 = ptr1 + 3;
//   cout<<*ptr2<<" ";
//   cout<< ptr2 - ptr1;
//   return 0;
 int a = 10;
 square(&a);
 cout << a << endl;
}