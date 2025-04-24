#include <iostream>
using namespace std;
class Human
{
public:
    int height;
    int weight;
    int age;

public:
    int getAge()
    {
        return this->age;
    }
    int setweight(int w)
    {
        this->weight = w;
    }
    int setheight(int w)
    {
        this->height = w;
    }
};

class Male : public Human
{
public:
    string color;
    void Sleep()
    {
        cout << "Male Sleeping " << endl;
    }
};

int main()
{
    Male obj1;
    obj1.setweight(84);
    obj1.setheight(74);
    cout << obj1.age << endl;
    cout << obj1.weight << endl;
    cout << obj1.height << endl;
    
    obj1.color="green";
    cout << obj1.color << endl;
    obj1.Sleep();
    return 0;
}