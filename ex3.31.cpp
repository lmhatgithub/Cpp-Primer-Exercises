#include <iostream>
using namespace std;

int main(){
	unsigned ints[10]; 
	for (int i=0; i!=10; i++){
		ints[i] = i;
		cout << ints[i] << " " ;
	}
	cout << endl;
	return 0;
}