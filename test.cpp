#include <iostream>
#include <string>
using namespace std;

int main(){
	string nums[] = {"one", "two", "three"};
	string *p = &nums[1];
	cout << *p << endl;
	return 0;
}