#include<iostream>
#include<stack>
#include<string>
#include<vector>
using namespace std;
class Solution_str{
    public:
    vector<string> manipulation_str(vector<string> arr){
         stack<string> s;
         for(int i = 0; i<arr.size() ; i++){
            if(s.empty()){
                s.push(arr[i]);
            }else if(s.top() == arr[i]){
                s.pop();
            }else{
                s.push(arr[i]);
            }
         }

         vector<string> newV1(s.size());
         int size = s.size()-1;
         cout<<"Size is:" <<endl;
         while(!s.empty()){
            newV1[size]= s.top();
            size--;
            s.pop();
         }

         return newV1;
    }
};
int main(){
    Solution_str sol ;
    vector<string> ans = {"ab","ac","da","da","ac","db","ea"};
    vector<string> result = sol.manipulation_str(ans);
    cout << "resulting Array: ";
    for (string x : result)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}