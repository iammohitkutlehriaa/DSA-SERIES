#include<iostream>
#include<string>

using namespace std;

string getSmallestString(int n, int k ) {
    string ans(n , 'a');
    k = k - n;

    for(int  i = n - 1; i >= 0 ; i--) {
        int add  = min( k , 25);
        ans[i] = ans[i] + add;
        k = k - add;
    }
    return ans;
}

int main() {
    int  n = 3; 
    int k = 30;
  cout << getSmallestString(n, k);


    return 0 ;

}