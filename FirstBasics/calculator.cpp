#include<iostream>
using namespace std;
int main(){
    char ch ;
    cout<<"for Add enter + opr"<<endl;
    cout<<"for Sub enter - opr"<<endl;
    cout<<"for Mul enter * opr"<<endl;
    cout<<"for Div enter / opr"<<endl;
    cout<<"for rem enter % opr"<<endl;
    int a,b;
    cout<<"enter two number:"<<endl;
    cin>>a >>b;
    cout<<"enter a opr";
    cin>> ch;
    
    switch(ch){
        case '+': 
                  cout<<"result is "<<(a+b);
                  break;
        case '-': 
                  
                  cout<<"result is "<<(a-b);
                  break;
        case '*': 
                  
                  cout<<"result is "<<(a*b);
                  break;
        case '/': 
                  
                  cout<<"result is "<<(a/b);
                  break;

        case '%': 
                  
                  cout<<"result is "<<(a%b);
                  break;
        default : cout<<"please enter right opr";
    }

}