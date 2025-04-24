#include <iostream>
using namespace std;

class Hero {
public:
    int health;

    // Constructor with Default Argument
    Hero(int h = 100) {
        health = h;
    }

    void showHealth() {
        cout << "Health: " << health << endl;
    }
};

int main() {
    Hero h1;      // 👈 Uses default value (100)
    Hero h2(75);  // 👈 Uses provided value (75)

    h1.showHealth();
    h2.showHealth();

    return 0;
}
