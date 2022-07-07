#include <map>
#include <iostream>

int main(){
	std::map<int, int> a {{1,2}, {3,4}, {5,6}};
	for(std::pair<int, int>& x : a){
		cout << x.first << " " << x.second << " ";
	}
}