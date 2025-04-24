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
};
int main()
{
 Hero h1;
 h1.setHealth(12);
 h1.setlevel('D');
 char name[7] = "babbar";
 h1.setName(name);
//  h1.print();
 
 Hero h2(h1);
//  h2.print();

 h1.name[0]='G';
 h1.print();
 h2.print();


//  copy assignmnet operator
    h1 = h2;
    h1.print();
    h2.print();
}
