//#include <bits/stdc++.h>
#include <iostream>
#include <limit>
using namespace std;

void show(vector<int> i);
int solve(int x);
vector<int> a {1,3,4};

int main() {
    for(int i = 0; i < 10; ++i)
	cout << solve(i) << ", ";
	return 0;
}

void show(vector<int> i){
    for(int x : i)
        cout << x << ", ";
    cout << "\n";
}


int solve(int x){
    if(x == 0) return 0;
    else if (x < 0) return numeric_limits<int>::max();
    unsigned int c = numeric_limits<unsigned>::max();
    for(auto y : a)
        c = min<unsigned>(c, solve(x-y) + 1 );
    return c;
}

// This does not work.
int solve(int x){
	if(x == 0) return 0;
    else if (x < 0) return numeric_limits<unsigned>::max();	// this has to be signed.
    unsigned int c = numeric_limits<unsigned>::max();
    for(auto y : a)
        c = min<unsigned>(c, solve(x-y) + 1 );
    return c;
}