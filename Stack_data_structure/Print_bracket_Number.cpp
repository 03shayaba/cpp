#include<iostream>
#include<stack>
#include<string>
using namespace std;
int Print_Bracket_Number(string s){
    stack<int> st;
    int count = 0;
    for(int i = 0 ; i< s.size() ; i++){
       if((s[i] == '(')||(s[i] == ')') ) {
        count ++;
       }
    }
    return count;
}
int main(){
    string str ;
    str = "(aa(bdc))p(de)";
    int result = Print_Bracket_Number(str);
    cout<<"Count Of Bracket" <<result << endl;
}