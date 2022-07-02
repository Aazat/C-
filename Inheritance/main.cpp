#include <iostream>
#include <string>
using namespace std;

public class parent{
    public:
        parent(int q, string w);
        int a;
        string b;
        void show();
};

public class child : public parent{
    public:
        child();

};

parent::parent(int q, string w){
    a = q;
    b = w;

}
void parent::show(){
    cout << a << " " << b << "\n";
}

int main(){
    parent p(1, "first");
    p.show();
}