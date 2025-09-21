#include <iostream>
#include <stack>
using namespace std;

// bool check(string str){
//     stack<char> s;
//     for(int i =0 ;i<str.size(); i++){
//         if(str[i] == '('){
//             s.push(str[i]);
//         }else{
//             if(s.empty()){
//                return 0;
//             }else{
//                 s.pop();
//             }
//         }
//     }

//     return s.empty();
// }


// valid parentheisis for the all bracket
bool check(string str)
{
    stack<char> s;
    for (int i = 0; i < str.size(); i++)
    {
        if ((str[i] == '(')||(str[i] == '[')||(str[i] == '{'))
        {
            s.push(str[i]);
        }
        
        
        else
        {
            if (s.empty())
            {
                return 0;
            }
            if ((str[i] == ')' && s.top() == '(') ||
                (str[i] == ']' && s.top() == '[') ||
                (str[i] == '}' && s.top() == '{'))
            {
                s.pop();
            }
        }
    }

    return s.empty();
}

int main()
{
    string str = "([)";
    cout << check(str) << endl;
}