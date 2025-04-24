#include<iostream>
using namespace std;

int main(){
    int n;
    int count = 0;
    cout<<"enter number" <<endl;
    cin>>n ;
    for(int i=1 ;i<n; i++){
        if(n%i==0){
            count++;
        }
    }
    cout <<count <<endl;
    if(count==1){
        cout<<" prime" <<endl;
    }
    else{
        cout<<"not  prime" <<endl;
    }

}