#include<iostream>
#include<string>
using namespace std;

class Car {
    string name;
    string color;
    public:
    Car(string nameVal , string colorVal) {
        cout << "Constructor is called. Object is being created..."<< endl;
        name = nameVal;
        color = colorVal;

    } 


    void start() {
        cout << "Car has Started..."<< endl;
    }
    void stop() {
        cout << " Car has stopped..." << endl;
    }

    // Getter
    string getName() {
        return name;
    }
};

int main() {
    Car c1("Porsche" , "White");
    cout << "Car name : " << c1.getName() << endl;
    return 0;
}