#include<iostream>
using namespace std;
class Hero{
    public:
    int health;
    char level;
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
int main(){
    // static allocation
    Hero a;
    // dynamically
    a.setHealth(40);
    cout<<"Ramesh health is " <<a.getHealth() <<endl;
    a.setlevel('b');
    cout<<"age is" <<a.health <<endl;
    cout<<"Name is "<<a.level<<endl;
    Hero *h = new Hero;
    h->setlevel('A');
    h->setHealth(70);
    cout<<"age is" <<(*h).health <<endl;;
    cout<<"Name is "<<(*h).level<<endl;

}