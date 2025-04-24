#include <iostream>
using namespace std;
int main()
{
    // int num = 5;
    // int *ptr = &num;

    // cout<<"the no is " <<num <<endl;
    // cout<<"the value of address is  " << &num <<endl;
    // cout<<"the ptr no is " <<*ptr <<endl;
    // cout<<"the value of address  is  " << ptr <<endl;

    // cout<<"size of integer is "<<sizeof(num) <<endl;
    // cout<<"size of pointer is "<<sizeof(ptr) <<endl;

    // int i=5;
    // int *q = &i;
    // cout<<q<<endl;
    // cout<<*q<<endl;
    // int *p = 0;
    //  p = &i;
    //  cout<< p <<endl;
    //  cout<< *p <<endl;

    //  int a =7;
    //  int b = a;
    //  b++;
    //  cout<<"before "<<a<<endl;
    // //   increment the pointer

    //   int *pt = &a;
    //   (*pt)++;
    //   cout<<"after "<<a<<endl;
    //   cout<<*pt<<endl;

    // //   copying a pointer
    // int *s = pt ;
    // cout<<s <<" -"<<pt <<endl;
    // cout<<*s <<"-"<<*pt <<endl;

    // int i =8;
    // int *t = &i;
    // cout<<(*t)++ <<endl;
    // cout<<"before t "<< t <<endl;
    // t =t+1;
    // cout<<"after t "<<t<<endl;

    // int j = 10;
    // int * p;
    // p = & i;
    // cout << "Address of the variable j is " << p << endl;
    // cout << "Address of the pointer p is " << & p;

    //     float f = 10.5;
    // float p = 2.5;
    // float* ptr = &f;
    // (*ptr)++;
    // *ptr = p;
    // cout << *ptr << " -" << f << "-" << p;

    // int *ptr = 0;
    // int a = 10;
    // *ptr = a;
    // cout << *ptr << endl;

//     char ch = 'a';
//     char *ptr = &ch;
//     ch++;
//     cout << *ptr << endl;

//     int a = 7;
// int *c = &a;
// c = c + 1;
// cout  << a << "  " << *c << endl;

int a[] = {1, 2, 3, 4};
cout << *(a) << " " << *(a+1);
}