#include <fstream>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	vector<string> byLine, byWord;
	string filename, line, word;
	ifstream fin("sample");
	
	if(fin.is_open()){
		while(getline(fin, line)){
			byLine.push_back(line);
		}
		fin.close();
	}
	
	//Printout
	cout << "By line: " <<endl;
	for(int i=0; i<byLine.size();++i)
		cout << byLine[i] << endl;
	cout << "THE END. " <<endl;
	
	ifstream fin2("sample");
	
	while(fin2 >> word)
		byWord.push_back(word);
	fin2.close();
	cout << "By word: " <<endl;
	for(auto w : byWord)
		cout << w << " ";
	cout << endl;
	cout << "THE END. " <<endl;
	
	return 0;
}