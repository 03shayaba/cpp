#include<iostream>
using namespace std;
class A{
  public:
    void sayHello(){
        cout<<"Hello world" <<endl;
    }  
    void sayHello(string name){
        cout<<"name is "<<name<<endl;
    }
};
int main(){
    A obj;
    obj.sayHello();
    obj.sayHello("Shayaba");


    return 0;
}