#include<iostream>
#include<vector>
#include<string>

using namespace std;

void printSubSets(string  str , string subset) {
    if(str.size() == 0 ){
        cout << subset << " \n";
        return ;
    }
    char ch = str[0];

    // yes choice 
    printSubSets(str.substr(1,str.size() -1), subset + ch);

    // no choice
    printSubSets(str.substr(1, str.size() - 1) , subset);
}

int main() {
    string str = "abc";
    string subset = "";
    printSubSets(str , subset);
    return  0 ;
}