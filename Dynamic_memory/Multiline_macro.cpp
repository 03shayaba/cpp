#include<iostream>
using namespace std;
// define multiline macro
#define PRINT_RECTANGLE(width, height)                     \
    for (int i = 0; i < height; i++) {                     \
        for (int j = 0; j < width; j++) {                  \
            std::cout << "*";                              \
        }                                                  \
        std::cout << std::endl;                            \
    }
int main(){
    PRINT_RECTANGLE(4, 3);
    return 0;
}