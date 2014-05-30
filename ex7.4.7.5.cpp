#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

int main(){
	Person pers;
	Person &p = pers;
	read(cin, p);
	print(cout, p) << endl;
	return 0;
}