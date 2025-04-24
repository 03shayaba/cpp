#include<iostream>
using namespace std;
int main(){
    int term1=0;
    int term2 = 1;
    int sum = 0;
    int n;
    cout<<"enter the no of terms you want the series"<<endl;
    cin>>n;
    cout<< term1<<""<<term2 ;
    for (int i = 2 ; i<n ; i++){
        sum = term1+term2;
        term1 = term2 ;
        term2 = sum;
         cout<<sum;
    }
   
}