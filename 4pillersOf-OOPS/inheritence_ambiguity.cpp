#include<iostream>
using namespace std;
class A{
    public:
    void func(){
        cout<<"I Am A" <<endl;
    }
};
class B{
    public:
    void func(){
        cout<<"I Am B" <<endl;
    }
};
class C :public A , public B{

};
int main(){
    C obj;
    obj.A::func();   //I Am A
    obj.B::func();    //I Am B
    return 0;
}