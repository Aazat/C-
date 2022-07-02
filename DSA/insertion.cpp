#include <iostream>
#include <vector>

using namespace std;

// Like how one would sort a  deck of cards in a hand, 
//  Pick a card, put on the holding hand
//  pick another card, look where to position the card in holding hand
// repeat for all cards.

vector<int> insert_sort(vector<int> sample);	// non-decreasing order insertion sort
vector<int> insert_sort_ni(vector<int> sample);	// non-increasing order
bool linear_search(vector<int> sample, int v);// Linear search


int main(){
    vector<int> sample {31, 41, 59, 26, 41, 58};
	
	vector<int> sorted = insert_sort(sample);
	vector<int> sorted_ni = insert_sort_ni(sample);
	for(int x : sorted)
		cout << x << " " ;
	
	cout <<endl;
	
	for(int x : sorted_ni)
		cout << x << " ";
	cout << endl;
	
	bool val = linear_search(sample, 52);
	cout << val << endl;
    
}


// for non-decreasing order.
vector<int> insert_sort(vector<int> sample){
	for (int i = 1; i < sample.size(); ++i) {
        int key = sample[i];
        int j = i - 1;
        while (j >= 0 && sample[j] > key) {
            sample[j + 1] = sample[j];
            --j;
        }
        sample[j + 1] = key;
    }
	return sample;
}
// non-increasing order.
vector<int> insert_sort_ni(vector<int> sample){
	for (int i = 1; i < sample.size(); ++i) {
        int key = sample[i];
        int j = i - 1;
        while (j >= 0 && sample[j] < key) {
            sample[j + 1] = sample[j];
            --j;
        }
        sample[j + 1] = key;
    }
	return sample;
}

bool linear_search(vector<int> sample, int v){
	
	for(int i = 0; i < sample.size(); ++i){
		if ( sample[i] == v)
			return true;
	}
	return false;
}