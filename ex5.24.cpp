#include <iostream>
using namespace std;

int main(){
	int a, b = 0;
	cin >> a >> b;
	if(b == 0)
		throw runtime_error("Zero Divider.");
	else
		cout << (double)a/b << endl;
	return 0;
}