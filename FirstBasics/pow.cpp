#include<iostream>
using namespace std;
int power(){
    int a , b;
    cout<< "enter a 2 number"<<endl;
    cin >>a >>b;
    int ans = 1;
    for (int i = 0;i<b;i++){
        ans = ans*a;
    }
    return ans;
}
int main(){
    cout<<power();
}