#include <iostream>
using namespace std;

int main(){
	string line1, line2;
	getline(cin, line1);
	getline(cin, line2);
	if(line1 == line2)
		cout << "Strings are equal." << endl;
	else if(line1 < line2)
		cout << line2 << " is larger." << endl;
	else
		cout << line1 << " is larger." << endl;
	return 0;
}