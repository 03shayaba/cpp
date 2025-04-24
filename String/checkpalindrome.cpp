#include <iostream>
using namespace std;
bool is_Special(char ch)
{
    if (ch >= '!' && ch <= '&')
    {
        return 1;
    }
    return 0;
}
char tolower(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool ispalindrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (tolower(a[s]) != tolower(a[e]))
        {
            if (is_Special(a[s]))
            {
                s++;
                 continue;
            }
            if (is_Special(a[e]))
            {
                e--;
                 continue;
            }
            return 0;
        }

        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20];
    cout << "enter string to check palindrome" << endl;
    cin >> name;
    int length = getLength(name);
    cout << ispalindrome(name, length);
    return 0;
}