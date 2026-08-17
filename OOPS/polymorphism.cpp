#include<iostream>
#include<string>
using namespace std;

class Print {
     public:
     void show(int x) {
        cout << "int : " << x << endl;
     }
     void show(string str ) {
        cout << "String : " << str << endl;
     }
};


class Complex {
   private:
   int real;
   int img;

   public: 
   Complex(int r , int i) {
      real = r;
      img = i;
   }
   void showNum() {
      cout << real << " + " << img << "i \n";
   }
   void operator +   (Complex &c2) {
      int realRes = this->real + c2.real;
      int imgRes = this->img + c2.img;
      Complex c3(realRes , imgRes);
      cout << "res = "; 
      c3.showNum();
   }
};

int main() {
   Complex c1(3,4);
   Complex c2(1,2);

   c1.showNum();
   c2.showNum();

   c1 + c2;
}