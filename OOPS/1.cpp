#include<iostream>
#include<string>
using namespace std;


class Complex{
    private:
    int real;
    int img;

    public:
    Complex(int r , int i){
    real = r;
    img = i;
    }
    void showNum() {
        cout << real << " - "<< img << "i \n";
    }
    void operator - (Complex &c1) {
        int resReal = this-> real  - c1.real;
        int resImg = this-> img - c1.img;
        Complex c3(resReal , resImg);
        cout << "res : ";
        c3.showNum();
    }
};

int main() {
    Complex c1(4,5);
    Complex c2(2,4);

    c1.showNum();
    c2.showNum();

    c1-c2;
    return 0;
}