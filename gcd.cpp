#include <iostream>
using namespace std;

int main(){
	int a, b, q, r=-1, it = 0;
	cout << "Enter 2 large integers:" << endl;
	cin >> a >> b;
	
	if(a<b){
		int temp = b;
		b = a;
		a = temp;
	}
		
	while(r!=0){
		++it;
		q = a/b;
		r = a%b;
		cout << "q" << it << ": " << q << ",\t";
		cout << "r" << it << ": " << r << ". " << endl;
		a = b;
		b = r;	
	}
	
	cout << "gcd(a,b) = " << a << endl;
	
	return 0;
}