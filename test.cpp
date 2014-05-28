#include <iostream>
using namespace std;

int main(){
	int i[] = {1,3,4};
	cout << *begin(i) << " " << *(end(i)-1) << endl;
	return 0;
}