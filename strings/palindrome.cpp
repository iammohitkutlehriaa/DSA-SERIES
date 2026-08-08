#include<iostream>
#include<cstring>
using  namespace std;

bool isPalindrome(char str[], int n) {
    int st = 0; int end = 0;
    while(st < end) {
        if(str[st++] != str[end--]) {
           cout << "Not  valid palindrome \n";
            return false;
        }
    }
    cout << "Valid palindrome  \n";
    return true;

}

int main() {
    char word[] = "racecar";
    isPalindrome(word, strlen(word));
}