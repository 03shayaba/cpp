#include<iostream>
using namespace std;
class Hero{
    public:
    int health ;
    char level;
    double s;
    

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
    Hero ramesh;
    cout<<"hi"<<endl <<sizeof(ramesh) <<endl;
    cout<<"Ramesh health is " <<ramesh.getHealth() <<endl;
    // printing ramesh propeties by using dot operator
    ramesh.setHealth(40);
    cout<<"Ramesh health is " <<ramesh.getHealth() <<endl;
    ramesh.level = 'a';
    cout<<"health is: " <<ramesh.health <<endl;
    cout<<"health is: " <<ramesh.level<<endl;     

    return 0;
}