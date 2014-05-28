#include <iostream>
using namespace std;

unsigned absl(int n){
	int a = n;
	if(n<0)
		a=-n;
	return a;
}

int main(){
	int n;
	cin >> n;
	unsigned a = absl(n);
	cout << "|" << n << "| = " << a << endl;
	return 0;
}
