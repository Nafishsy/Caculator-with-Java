#include<iostream>

using namespace std;

class Animal
{
public:
    string aName;

    void eat()
    {
        cout << "Munch Munch\n";
    }

    Animal()
    {

    }

    void make_noise()
    {
        cout << "Grr says "<<aName<<endl;
    }

    Animal(string nm)   // Constructor with parameters
    {
        cout<<"An Animal has been born\n";
        aName = nm;
    }

};

class Cat : public Animal
{
public:
    string cName;

    void make_noise()
    {
        cout << "Meow says "<<cName<<endl;
    }

    Cat(string nm)   // Constructor with parameters
    {
        cout<<"A Cat has been born\n";
        cName = nm;
    }

};

class Dog : public Animal
{
public:
    string dName;

    void make_noise()
    {
        cout << "Bark says "<<dName<<endl;
    }

    Dog(string nm)   // Constructor with parameters
    {
        cout<<"A Dog has been born\n";
        dName = nm;
    }

};

int main()
{
    Cat c("Missy");
    Dog d1("Jhon");
    Dog d2("Buggy");
    Animal a("Labib");

    cout<<c.cName<<endl;
    c.eat();
    c.make_noise();

    cout<<d1.dName<<endl;
    d1.eat();
    d1.make_noise();

    cout<<d2.dName<<endl;
    d2.eat();
    d2.make_noise();

    cout<<a.aName<<endl;
    a.eat();
    a.make_noise();

}
