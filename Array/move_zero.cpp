#include<iostream>
#include<vector>
using namespace std;
vector<int> moveZero(vector<int> v){
int i = 0;
int size = v.size();
for(int j = 0; j<size ; j++){
    if(v[j] != 0){
        swap(v[j] , v[i]);
        i++;
    }
}
return v;
}
void print(vector<int> v){
    for(int i =0; i<v.size(); i++){
        cout << v[i] <<" ";
    }
}
int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(13);
    v.push_back(0);
    v.push_back(12);
   vector<int> ans = moveZero(v);
   cout<<"printitng final array"<<endl;
   print(ans);
    return 0;
}