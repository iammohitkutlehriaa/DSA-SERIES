#include<iostream>
#include<cstring>
using namespace std;


int reverse(char word[] , int n) {
    int st = 0, end = n -1;
    while(st < end) {
        swap(word[st++], word[end--]) ;    
    }
}

int main() {
    char word[] = "Mohit Thakur";
    reverse(word , strlen(word));
    cout << "reverse : " << word << endl;

    return 0;
}