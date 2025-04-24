#include<iostream>
using namespace std;
int Update(int a){
    int ans = a*a;
    return ans;
}
int main(){
int a =14;
cout << a << endl;
a = Update(a);
cout << a << endl;
}
