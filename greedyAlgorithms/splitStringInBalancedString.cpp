#include<iostream>
#include<vector>
#include<string>

using namespace std;

int balanceSubString(string s) {
    int bal = 0;
    int count  = 0;
    for(char c : s) {
        if(c == 'L' ) {
            bal++;
        } else {
            bal--;
        }
        if(bal == 0) {
          count++;
        }
    }
    cout << "Balance sub String is : " <<count << endl;
    return count ;

}

int main() {
    string s = "RLRRLLRLRL";

    balanceSubString(s);
    return 0;

}