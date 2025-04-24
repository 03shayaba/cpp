#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;
    Complex(int r, int i) { real = r; imag = i; }

    // Overloading + operator
    Complex operator+(Complex const &obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4), c2(2, 5);
    Complex c3 = c1 + c2; // Using overloaded + operator
    c3.display();
    return 0;
}
