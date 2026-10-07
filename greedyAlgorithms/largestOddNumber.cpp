#include<iostream>
#include<string>

using namespace std;

string largestOddNumber(string num) {
    for(int  i = num.size() - 1; i >= 0; i--) {
        if((num[i] - '0') % 2 != 0){
            return num.substr(0 , i +1);
        }
    }
    return "-1";

}

int main(){
string num = "973144";

cout << "Largest SubString is : " << largestOddNumber(num) << endl;

    return 0;
}