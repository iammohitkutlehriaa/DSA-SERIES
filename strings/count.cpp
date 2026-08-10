#include<iostream>
#include<string>
using namespace std;

void countVowels(string word) {
    int count = 0;
    for(int  i = 0; i < word.length(); i++) {
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u'){
            count++;
        }
    }
    cout << "Count is : " << count;
}

int main() {
    string word = {"My name is mohit "};
    countVowels(word);
}