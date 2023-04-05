#include <iostream>
using namespace std;

class Player
{
protected:
    int age;

public:
    string name;

public:
    void setName(string n)
    {
        this->name = n;
    }
    void setAge(int a)
    {
        this->age = a;
    }
}

class Batsman : public Player
{
public:
    char gender;

    void score()
    {
        cout << "batsman is sleeping" << endl;
    }

    void setNameOfBatsman(string n)
    {
        this->name = n;
    }
    void setAgeOfBatsman(int a)
    {
        this->age = a;
    }

};

int main()
{

    Batsman b;
    // cout<<b.age;

    // b.setAgeOfBatsman(15);
    // cout<<b.name;
    // b.setNameOfBatsman("mk");

    // b.setAge(20);
    // cout << b.age << endl;
    // b.setName("mk");
    // cout << b.name << endl;
    // b.score();
    return 0;
}
