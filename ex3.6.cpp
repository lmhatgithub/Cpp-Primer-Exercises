#include <iostream>
using namespace std;

int main(){
	string s("some string");
	for (char &c:s)
		c = 'X';
	cout << s << endl;
	return 0;
}