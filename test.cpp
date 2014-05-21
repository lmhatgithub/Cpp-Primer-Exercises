#include <iostream>
#include <string>
using namespace std;

int main(){
	const char *cp = "Hello World";
	cout << *cp << endl;
	cout << cp << endl;
	bool val = cp && *cp;
	cout << val << endl;
	if (val)
		cout << "True?" <<endl;
	return 0;
}