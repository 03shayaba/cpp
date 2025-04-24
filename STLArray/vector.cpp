#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<"capacity ->" <<v.capacity()<<endl;
    v.push_back(1);
    cout<<"capacity ->" <<v.capacity()<<endl;
    
    v.push_back(1);
    cout<<"capacity ->" <<v.capacity()<<endl;
    v.push_back(1);
    cout<<"capacity ->" <<v.capacity()<<endl;
    cout<<"size->" <<v.size()<<endl;
    cout<<"front->" <<v.front()<<endl;
    cout<<"back->" <<v.back()<<endl;
    cout<<"before pop"<<endl;
    for(int i :v){
        cout<<i<<" ";

    }
    cout<<endl;
    v.pop_back();
    cout<<"after pop"<<endl;
    for(int i : v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"before clesar size"<<v.size()<<endl;
    v.clear();
    cout<<"after clesar size"<<v.size()<<endl;
    vector<int> a(5,1);
    for(int i:a){
        cout<<i <<" ";
    }
    cout<<endl;
    vector<int> last(a);
    for(int i:a){
        cout<<i <<" ";
    }
    return 0;
}