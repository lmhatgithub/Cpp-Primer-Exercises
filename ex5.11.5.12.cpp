#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	unsigned aCnt = 0, eCnt = 0, iCnt= 0, oCnt = 0, uCnt = 0,
			 spaceCnt = 0, tabCnt = 0, newlineCnt = 0;
	string text;

	while (getline(cin, text)){
		++newlineCnt;
		for (char ch : text){
		switch(ch){
		case ' ':
			++spaceCnt;
			break;
		case '\t':
			++tabCnt;
			break;
		case 'a':
		case 'A':
			++aCnt;
			break;
		case 'e':
		case 'E':
			++eCnt;
			break;
		case 'i':
		case 'I':
			++iCnt;
			break;
		case 'o':
		case 'O':
			++oCnt;
			break;
		case 'u':
		case 'U':
			++uCnt;
			break;		
			}
		}
	}
	cout << "Number of a/A:\t" << aCnt << endl;
	cout << "Number of e/E:\t" << eCnt << endl;
	cout << "Number of i/I:\t" << iCnt << endl;
	cout << "Number of o/O:\t" << oCnt << endl;
	cout << "Number of u/U:\t" << uCnt << endl;
	cout << "Number of space:\t" << spaceCnt << endl;
	cout << "Number of tabs:\t" << tabCnt << endl;
	cout << "Number of newlines:\t" << newlineCnt << endl;
	
	return 0;
}