#include<iostream>
#include<map>
#include<string>
using namespace std;

int main() {

    map<int  , string> m; 
    m[101] = "mohit";
    m[110] = "ritika";
    m[120] = "mohit";

   for(auto it: m) {
    cout << "Key : "<< it.first <<" , " << "value : " << it.second << endl;
   }

   
    cout << m.count(101) << endl;
    
    return 0;

}