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
        cout << " Default constructor called"<<endl;
    }
    // parameterized constructor
    Hero(int health ,int level){
       
        this -> health = health;
        this->level = level;
    }

    // copy constructor
    Hero(Hero& temp){
        this->health = temp.health;
        this->level = temp.level;
        cout<<"COPY constructor called"<<endl;
    }
    void print(){
        cout<<"level is "<<level;
        cout<<endl <<"health is "<<health<<endl;
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
    // Hero ramesh;
    // ramesh.setHealth(60);
    // ramesh.setlevel('B');

    Hero ramesh(80,'c');
    ramesh.print();
    Hero suresh(ramesh);
    suresh.print();


   
    //   object created dynamically
    Hero *a = new Hero;
}
