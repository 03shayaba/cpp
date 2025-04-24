#include <iostream>
using namespace std;
int main(){
    int sum = 0 , n , count=1;
    int term1 = 0,term2=1;
    cout <<"enter a number of terms: "<<endl;
    cin >> n;
    if (n==0){
        cout << "please enter terms starting from 1" << endl ;
    }
    if (n>=1){
    cout <<"the sequence is:" << term1  ;
    }
    if (n>=2)
    cout << term2 ;
    for(int i = 3 ; i<=n ;i++){
    sum = term1 + term2 ;
    cout << sum ;
    term1 = term2 ;
    term2 = sum ;
    }
    }
    