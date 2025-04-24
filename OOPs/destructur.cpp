#include <iostream>
#include <string.h>
using namespace std;
class Hero
{
private:
    int health;
public:
    char *name;
    char level;
     static int timetOcomplete;

    // default constructor
    // shallow copy
    Hero()
    {
        cout << " Default constructor called"<<endl;
        name = new char[100];
    }
    // parameterized constructor
    Hero(int health ,int level){
       
        this -> health = health;
        this->level = level;
    }

    // copy constructor
    // deep copy
    Hero(Hero& temp){
        char *ch = new char[strlen(temp.name) +1];
        strcpy(ch ,temp.name);
        this->name = ch;
        this->health = temp.health;
        this->level = temp.level;
        cout<<"COPY constructor called"<<endl;
    }
    void print(){
        cout<<"level is "<<level;
        cout<<" ," <<"health is "<<health<<",";
        cout<<"name is " <<name <<endl;
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

    int getName(){
        return level;
    }
    int setName(char *name){
       this->name = name;
    }
    // destructur
    ~Hero(){
       cout<<"Destructur is callled " <<endl; 
    }
};


// initializing static member outside the class
int Hero ::timetOcomplete = 5;
int main()
{
// static member concept

cout<<Hero::timetOcomplete <<endl;


    // destructor concept
//  Hero h1;

//  Hero *b = new Hero();
//  delete b;
//  return 0;
}
