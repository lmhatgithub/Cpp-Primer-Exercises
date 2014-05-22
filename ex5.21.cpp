#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	string word;
	vector<string> buf;
	bool repeat_f = false;
	cin >> word;
	buf.push_back(word);
	while(cin >> word){
		for (auto b : buf){
			string word_l = word;
			for (auto &c : word_l)
				c = tolower(c);
			if( word == b || (word_l == b && isupper(word[0]))){
				cout << b << " is repeated." << endl;
				repeat_f = true;
				break;
			}
		}
		if(repeat_f)
			break;
		buf.push_back(word);
	}
	if(!repeat_f)
		cout << "No word was repeated." << endl;
	return 0;
}