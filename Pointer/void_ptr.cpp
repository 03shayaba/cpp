#include <iostream>
using namespace std;

int main() {
    int intVar = 10;
    float floatVar = 3.14;
    char charVar = 'A';

    // Void pointer
    void* ptr;

    // Assign address of different data types to the void pointer
    ptr = &intVar;
    cout << "Value of intVar: " << *(static_cast<int*>(ptr)) << endl;

    ptr = &floatVar;
    cout << "Value of floatVar: " << *(static_cast<float*>(ptr)) << endl;

    ptr = &charVar;
    cout << "Value of charVar: " << *(static_cast<char*>(ptr)) << endl;

    return 0;

    // Void pointer ptr ko hum kisi bhi type ke variable ka address assign kar sakte hain.
// Example mein, ptr ke andar intVar, floatVar, aur charVar ka address store kiya gaya hai, ek ke baad ek.
// Directly ptr ko dereference nahi kar sakte, kyunki uska type specified nahi hota.
// Dereference karne se pehle hume static_cast ka use karke ptr ko correct type mein cast karna padta hai.



}
