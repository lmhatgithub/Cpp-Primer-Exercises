#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	string word;
	vector<string> text;
	vector<string>::iterator it;
	string::iterator sit;
	while(cin >> word){
		text.push_back(word);
	}
	for(auto it = text.cbegin(); 
		it != text.cend() && ! it->empty();
		++it)
		for(auto sit = (*it).cbegin(); 
		sit != (*it).cend() && ! (*sit)->empty();
		++sit)
			*sit = toupper(*sit);
	decltype(text.size()) index=0;
	for(index = 0; index!=text.size();index++){
		cout << text[index] << " ";
		if(index!=0 & (index+1)%8 == 0)
			cout << endl;
	}
		
	return 0;
}
