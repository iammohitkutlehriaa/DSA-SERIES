#include<iostream>
using namespace std;

char nextAlpha(char ch) {
    if(ch == 'z') {
        return 'a';
    } else {
        return ch +1;
    }
}


int main() {
    cout << "NextAplhabet is " << nextAlpha('z');

}