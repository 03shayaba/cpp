#include <iostream>
#include <stack>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> makeBeautiful(vector<int> arr)
    {
        // code here
        stack<int> s;
        for (int i = 0; i < arr.size(); i++)
        {
            // stack can be empty
            if (s.empty())
            {
                s.push(arr[i]);
            }

            // stack non negative number
            else if (arr[i] >= 0)
            {
                if (s.top() >= 0)
                {
                    s.push(arr[i]);
                }
                else
                {
                    s.pop();
                }
            }
            // negative number
            else
            {
                if (s.top() < 0)
                {
                    s.push(arr[i]);
                }
                else
                {
                    s.pop();
                }
            }
        }

        vector<int> ans(s.size());
        int i = s.size() - 1;
        while (!s.empty())
        {
            ans[i] = s.top();
            i--;
            s.pop();
        }

        return ans;
    }
};

int main()
{

    Solution sol;
    vector<int> arr = {4, 3, -2, -1, 5, -3,9,8};
    vector<int> result = sol.makeBeautiful(arr);

    cout << "resulting Array: ";
    for (int x : result)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
