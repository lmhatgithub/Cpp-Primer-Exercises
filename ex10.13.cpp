#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	vector<string> v;
	string word;
	while(cin >> word){
		v.push_back(word);
	}
	
	vector<string>::iterator bound = v.begin();
	
	bound = partition(v.begin(), v.end(), fiveOrMore);
	
	for (auto it = v.begin(); it != bound; ++it)
		cout << *it << ' ';
	cout << endl;
	return 0;	
}