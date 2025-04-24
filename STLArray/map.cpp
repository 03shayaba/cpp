#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int , string> m;
    m[1]="shayaba";
    m[2]="bano";
    m[13]="engineer";
    m.insert({5,"bheen"});
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
cout<<"finding 13" <<" "<<"is  "<<m.count(13)<<endl;
    return 0;
}