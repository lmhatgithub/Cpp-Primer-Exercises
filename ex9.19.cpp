#include <iostream>
#include <string>
#include <list>
using namespace std;

int main(){
	string word;
	list<string> wl;
	while(cin>>word){
		wl.push_back(word);
	}
	auto it = wl.begin();
	while(it != wl.end())
		cout << *(it++)+' ' ;
	cout << endl;
	return 0;
}