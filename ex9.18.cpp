#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main(){
	string word;
	deque<string> wq;
	while(cin>>word){
		wq.push_back(word);
	}
	auto it = wq.begin();
	while(it != wq.end())
		cout << *(it++) ;
	cout << endl;
	return 0;
}