#include <iostream>
using namespace std;

void swap (int &i, int &j){
	int k;
	k = i;
	i = j;
	j = k;
}

int main(){
	int m,n;
	int &mr = m, &nr = n;
	cin >> mr >> nr;
	swap(mr, nr);
	cout << mr << " " << nr <<endl;
}
