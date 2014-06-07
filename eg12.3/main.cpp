#include <iostream>
#include <fstream>
#include <string>

#include "TextQuery.h"
#include "QueryResult.h"

using namespace std;

void runQueries(ifstream &infile);

int main(){
	ifstream file("sample.txt");
	runQueries(file);
	return 0;
}

void runQueries(ifstream &infile){
	TextQuery tq(infile);
	while(true){
		cout << "Enter word to look for, or q to quit:";
		string s;
		if(!(cin >> s) || s=="q") break;
		print(cout, tq.query(s)) << endl;
	}
}