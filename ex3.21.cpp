#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	string word;
	vector<string> text;
	while(cin >> word){
		text.push_back(word);
	}
	for(auto it = text.begin(); 
		it != text.end() && ! it->empty();
		++it)
		for(auto &c:*it)
			c = toupper(c);
	for(auto it = text.cbegin(); 
		it != text.cend() && ! it->empty();
		++it)
			cout << *it << " ";
	cout << endl;
	return 0;
}
