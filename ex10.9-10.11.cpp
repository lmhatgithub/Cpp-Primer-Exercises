#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void elimDups(vector<string> &words);
bool isShorter(const string &s1, const string &s2);

int main(){
	vector<string> sent;
	string word;
	while(cin >> word){
		sent.push_back(word);
	}
	vector<string> &s = sent;
	elimDups(s);
	for (auto w : sent)
		cout << w << ' ';
	cout << endl;
	return 0;	
}

void elimDups(vector<string> &words){
	sort(words.begin(), words.end());
	stable_sort(words.begin(), words.end(), isShorter);
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
}

bool isShorter(const string &s1, const string &s2){
	return s1.size() < s2.size();
}