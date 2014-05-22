#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	unsigned aCnt = 0, eCnt = 0, iCnt= 0, oCnt = 0, uCnt = 0;
	char ch;
	while (cin >> ch){
		switch(ch){
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
	cout << "Number of a/A:\t" << aCnt << endl;
	cout << "Number of e/E:\t" << eCnt << endl;
	cout << "Number of i/I:\t" << iCnt << endl;
	cout << "Number of o/O:\t" << oCnt << endl;
	cout << "Number of u/U:\t" << uCnt << endl;
	
	return 0;
}