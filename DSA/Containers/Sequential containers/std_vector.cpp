#include <vector>
#include <string>
#include <iostream>

int main(){
	// initializing with initializer list;
	std::vector<int> a {1,2,3,4,5};
	
	// = operator for initialization.
	std::vector<string> b = {"some", "thing", "here"};

	// for each loop for accessing values of vectors
	for (auto x : a){
		std::cout << x << " ";
	}

	// iterators for accessing values.
	for(std::vector<string>::iterator it = b.begin(); it != b.end(); it++){
		std::cout << *it << " ";
	}
}