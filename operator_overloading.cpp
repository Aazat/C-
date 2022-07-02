#include <iostream>
#include <vector>
using namespace std;

struct MyStruct
{
	int a;
	double b;
	string c;
	MyStruct(int o, int s, string n) {
		this->a = o;
		this->b = s;
		this->c = n;
	}
	void print() const {
		cout <<this->a << " " << this->b << " " << this->c << "\n";
	}
};

ostream& operator<<( ostream& os, const MyStruct& other) {
	os << other.a << " " << other.b << " " << other.c << "\n";
	return os;
}

template <typename T>
void show(vector<T> a) {
	for (T x : a)
		cout << x << " ";
	cout << "\n";
}

int main() {
	vector<int> a{ 1,2,3,4,5,6 };
	vector<double> b{ 1.2, 4.6,3,10.3 };
	MyStruct a1(1,2,"name");
	MyStruct a2(3,4,"second");
	vector<MyStruct> c{ a1, a2 };
	show(a);
	show(b);
	show(c);
	return 0;
}

