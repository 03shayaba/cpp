#include <iostream>
using namespace std;

// Check if a character is a special character in the range '!' to '&'
bool is_Special(char ch)
{
    if (ch >= '!' && ch <= '&')
    {
        return 1;
    }
    return 0; // Added this to handle cases when `ch` is not special
}

// Convert character to lowercase
char tolower(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch - 'A' + 'a';
    }
    return ch; // Return character as-is if it's not uppercase
}

// Check if the input string is a palindrome, ignoring special characters
bool ispalindrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        // Ignore special characters
        if (is_Special(a[s]))
        {
            s++;
            continue; // Skip the rest of the loop for this iteration
        }
        if (is_Special(a[e]))
        {
            e--;
            continue; // Skip the rest of the loop for this iteration
        }

        // Compare characters (case-insensitive)
        if (tolower(a[s]) != tolower(a[e]))
        {
            return 0; // Not a palindrome
        }

        s++;
        e--;
    }
    return 1; // It's a palindrome
}

// Get the length of a character array
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
    char name[100]; // Increased size to handle larger input
    cout << "Enter string to check palindrome: ";
    cin.getline(name, sizeof(name)); // Use getline to handle spaces in input

    int length = getLength(name);
    if (ispalindrome(name, length))
    {
        cout << "The string is a palindrome!" << endl;
    }
    else
    {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
