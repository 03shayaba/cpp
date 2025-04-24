#include<iostream>
using namespace std;
// int main()
// {
//   int ***r, **q, *p, i=8;
//   p = &i;
//   (*p)++;
//   q = &p;
//   (**q)++;
//   r = &q;
//   cout<<*p << " " <<**q << " "<<***r;
//   return 0;
// }


void increment(int **p){
  (**p)++;
}

int main(){
 int num = 10;
 int *ptr = &num;
 increment(&ptr);
 cout << num << endl;
}