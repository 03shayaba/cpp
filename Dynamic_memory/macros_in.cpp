#include<iostream>
using namespace std;
// #define PI 3.14 
// // PI is define the object -like macro
// int main(){
//     // float PI = 3.14;
//     int r = 4;
// double area = 0;
//     area = PI * r * r;
//     cout<<area;
//     return 0;
// }



// Define a macro to calculate the square of a number
// #define SQUARE(x) (x * x)

// int main()
// {
//     int n = 7;
//     int result = SQUARE(n); // Expands to: (n * n) replaces SQUARE(n)]
//     cout << "Square of " << n << " is " << result;
//     return 0;
// }

// function-like macro
// Define a macro to print a value
#define PRINT(x) cout << "Value is: " << x

int main()
{
    int value = 42;

    // Print the value using the PRINT macro
    PRINT(value);
    return 0;
}