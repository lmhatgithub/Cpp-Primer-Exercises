#include <iostream>
using namespace std;

int fact(int n){
	int f = n;
	for (int i = n-1; i!=0; i--)
		f *= i;
	return f;
}

int main(){
	int n;
	cin >> n;
	int f = fact(n);
	cout << n <<"! = "<< f << endl;
	return 0;
}
