#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	auto sum = [a](int i2){return a+i2;} ;
	cout << sum(b) << endl;
	return 0;	
}