#inlcude <iostream>
#inlcude <string>
#include <vector>
#include <sstream>

int main(){
	// taking array inputs and combined with string input.
	std::string numbers;
	std::string name;
	std::getline(cin , numbers);
	std::cin >> name;
	std::stringstream ss(numbers);
	std::vector<int> v_numbers;
	int num;
	while(ss >> num){
		v_numbers.push_back(num);
	}
}
