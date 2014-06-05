#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
#include <algorithm>
#include <map>
using namespace std;

int main(){
	map<string, size_t> word_cnt;
	string word;
	fstream file("sample.txt");
	while(file >> word){
		string::iterator s;
		for(s = word.begin(); s != word.end(); ++s){
			if(isupper(*s))
				tolower(*s);
			if(ispunct(*s)){
				word.erase(s);
				break;
			}
		}
		++word_cnt[word];
	}	
	
	for(auto w : word_cnt){
		cout << w.first << " occurs ";
		cout << w.second << ((w.second > 1)?" times.":" time.") <<endl;
	}
	return 0;
}