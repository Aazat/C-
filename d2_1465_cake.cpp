#include <iostream>
#include <vector>
#include <algorithm>

void show(vector<int>& i);
int max_diff(vector<int>& a);
long long max_area(int& h, int& w, vector<int>& a, vector<int>& b);

int main() {
    int h = 1000000000, w = 1000000000;
    vector<int> horizontal {2};
    vector<int> vertical {2};
	cout << max_area(h, w, horizontal, vertical);
	return 0;
}

void show(vector<int>& i){
    for(int& x : i)
        cout << x << ", ";
    cout << "\n";
}

int max_diff(vector<int>& a){
    int max_diff = a[0];
    
    int ind = 1;
        for(int i = 1; i < a.size(); i++){
            if(max_diff < abs(a[i] - a[i-1]))
                max_diff = abs(a[i] - a[i-1]);
        }
        
    return max_diff;
}
long long max_area(int& h, int& w,vector<int>& a, vector<int>& b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    a.push_back(h);
    b.push_back(w);
    int c = pow(10,9) + 7;
    return max_diff(a)*max_diff(b)%c;
}