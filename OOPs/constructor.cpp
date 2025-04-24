#include <iostream>
using namespace std;
class Hero
{
public:
    int health;
    char level;
    // default constructor
    Hero()
    {
        cout << "constructor called"<<endl;
    }
    // parameterized constructor
    Hero(int health){
        cout<<"this ->" <<this <<endl;
        this -> health = health;
    }
    int getHealth(){
        return health;
    }
    int getLevel(){
        return level;
    }
    int setHealth(int h){
        health=h;
    }
    int setlevel(int ch){
        level = ch;
    }
};
int main()
{
    cout << "Hi" << endl;
    // object created statically
    Hero ramesh(10);
    cout<<"address of ramesh " <<&ramesh <<endl;
    ramesh.getHealth();

    cout << endl<< "bye" << endl;
    //   object created dynamically
    Hero *a = new Hero;
}
