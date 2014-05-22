#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	string word;
	vector<string> buf;
	bool repeat_f = false;
	while(cin >> word){
		for (auto b : buf)
			if(word == b){
				cout << b << " is repeated." << endl;
				repeat_f = true;
				break;
			}
		if(repeat_f)
			break;
		buf.push_back(word);
	}
	if(!repeat_f)
		cout << "No word was repeated." << endl;
	return 0;
}