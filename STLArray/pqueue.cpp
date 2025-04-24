#include<iostream>
#include<queue>
using namespace std;
int main(){
    // max heap
    priority_queue<int> max;
    // min heap
    priority_queue<int, vector<int>,greater<int>> min;
    max.push(1);
    max.push(3);
    max.push(9);
    max.push(6);
    // max.push(1);
    // max.push(3);
    int n = max.size();
    cout<<"size"<<max.size()<<endl;
    for(int i=0; i<n;i++ ){
        cout<<max.top()<<" ";
        max.pop();   
    }
    cout<<endl;
    min.push(1);
    min.push(3);
    min.push(9);
    min.push(6);
    // max.push(1);
    // max.push(3);
    int m = min.size();
    cout<<"size"<<min.size()<<endl;
    for(int i=0; i<n;i++ ){
        cout<<min.top()<<" ";
        min.pop();   
    }
    cout<<endl;

    return 0;
}