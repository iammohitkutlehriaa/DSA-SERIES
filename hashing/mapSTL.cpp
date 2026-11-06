#include<iostream>
#include<map>
using namespace std;

int main() {
    map<string , int>m;

    m["Japan"] = 150;
    m["USA"] = 200;
    m["Swizterland"]  = 100;
    m["India"]  = 50;

    m.erase("USA");

    for(pair<string , int> country : m ) {
        cout << country.first << " , " << country.second << endl; 
    }


    if(m.count("Hong-Kong") == 1) {
        cout << "Hong-kong exist" << endl;
    }  else {
        cout << "Hong-kong doesn't exist" << endl;
    }
  
    return 0;
}