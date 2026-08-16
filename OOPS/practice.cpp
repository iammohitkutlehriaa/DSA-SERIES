#include<iostream>
#include<string>
using namespace std;

class Animal {
    public:
    string  color;
    void eat() {
        cout << " Eat \n";
    }
    void breathe() {
        cout << "breathe \n";
    }
};

class Fish  : public Animal{
    public: 
    int fins;

    void swim() {
        cout << "Swim \n";
    }
};

int main() {

    Fish f1;
    f1.fins = 3;
    cout << f1.fins << endl;
    f1.swim();   

    return 0;

}