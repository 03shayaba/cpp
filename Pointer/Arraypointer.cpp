#include <iostream>
using namespace std;
int main()
{
  // int arr[10] = {23, 112, 41, 56};
  //     cout << "add of first memory block is " << arr << endl;  //addres gives arr
  //     cout << arr[0] << endl;  //value of index
  //     cout << "add of first index  " << &arr[0] << endl;  //address of arr

  //     cout<<"4th " <<*arr <<endl; //it returs value at 0th location
  //    cout<<"5th " <<*arr+1 <<endl; //it returs value of 0th loc but adding 1 value that is 2+1 =3
  //     cout<<"6th " <<*(arr+1) <<endl; //it return 1st index value
  //     cout<<"7th " <<*(arr)+1 <<endl; //it returs value of 0th loc but adding 1 value that is 2+1 =3
  //      cout << arr[2] <<"_ "<< *(arr+2)<<endl;    //arr[i] = *(arr +i)
  //      cout << 2[arr] <<"_ "<< *(2+arr)<<endl;    //i[arr] = *(i + arr)

  int temp[10]={1,2};
  cout << "size is "<< sizeof(temp) << endl;
  cout << sizeof(*temp) << endl;
  cout << sizeof(&temp) << endl;
  int *ptr = &temp[0];
  cout << sizeof(ptr) << endl;
  cout << sizeof(*ptr) << endl;
    cout << sizeof(&ptr) << endl;

  // int a[] = {1, 2, 3, 4};
  // int *p = a++;
  // cout << *p << endl;  //output erroe

  // int arr[] = {4, 5, 6, 7};
  // int *p = (arr + 1);
  // cout << *arr + 9;   //output 13

  // char b[] ="xyz";
  // char *c = &b[0];
  // cout<<c<<endl;   //output xyz

  // char s[] = "hello";
  // char *p = s;
  // cout << s[0] << " " << p[0];

  // char *ptr; 
  // char Str[] = "abcdefg";
  // ptr = Str;
  // ptr += 5;
  // cout << ptr;

  int arr[10] = {7,9,3};
  cout<<"address of the pointer"<<endl;
  cout<<*arr <<endl;
  cout<<*arr + 1 <<endl;
  cout<<*arr <<endl;
  for(int i = 0 ; i <3 ; i++){
    cout<<i[arr] <<" " ;
  }
  return 0;
}