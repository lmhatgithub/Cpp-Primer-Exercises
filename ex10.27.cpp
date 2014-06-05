#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <algorithm>
using namespace std;

int main(){
	vector<int> v;
	list<int> il;
	int i;
	while(cin >> i){
		v.push_back(i);
	}
	list<int>::iterator it=il.begin();
	unique_copy(v.begin(), v.end(), inserter(il, it));
	
	for(auto u : il)
		cout << u << ' ' ;
	cout << endl;
	return 0;
}