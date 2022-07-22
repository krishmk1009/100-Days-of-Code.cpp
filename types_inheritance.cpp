#include <iostream>
using namespace std;

class Animal
{

public:
    int age;
    string name;

public:
    void barking()
    {
        cout << "barking" << endl;
    }
};

class Human 
{
public:
    void speking()
    {
        cout << "speaking" << endl;
    }
};

class Hybrid : public Human, public Animal
{
};

int main()
{
    // Dog d;
    // d.speaking();
    Hybrid h;
    
    h.speking();
    h.barking();

    return 0;
}
