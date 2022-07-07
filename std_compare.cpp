#include <iostream>
#include <string>
using namespace std;
int main(){
    string s = "abcde";
    string b = "abd";
    string c = "abcde";
    string d = "abcd";
    string e = "bbcde";
    string f = "abcdef";
    cout << s.compare(b) << ", " << s.compare(c)<< ", " << s.compare(d) << ", " <<
    s.compare(e) << ", " << s.compare(f);
    
    // if in s.compare, s is big (2 criterias for it) then >0 otherwise <0
    // == 0 if both equal.
}
