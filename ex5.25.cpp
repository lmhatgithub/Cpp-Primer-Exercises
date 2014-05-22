#include <iostream>
using namespace std;

int main(){
	int a, b = 0;
	cin >> a >> b;
	try{
		if(b == 0)
			throw runtime_error("Zero Divider.");
		cout << (double)a/b << endl;
	}catch(runtime_error err){
		cout << "\tTry Again, y or n?" <<endl;
		char ans;
		cin >> ans;
		if(ans == 'y'| ans == 'Y'){
			cin >> b;
			if(b == 0)
				throw runtime_error("Zero Divider! Huh, ...");
			cout << (double)a/b << endl;
		}
	}		
	return 0;
}