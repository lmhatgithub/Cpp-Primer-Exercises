#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	auto sum = [](int a, int b){return a+b;} ;
	cout << sum(a,b) << endl;
	return 0;	
}