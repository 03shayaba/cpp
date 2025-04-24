#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> s;
    s.push("shayaba");
    s.push("sakshi");
    s.push("vandu");
    cout<<"size "<<s.size()<<endl;
    cout<<"first element "<<s.front()<<endl;
    cout<<"last element "<<s.back()<<endl;
    return 0;
}