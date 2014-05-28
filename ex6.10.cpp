#include <iostream>
using namespace std;

void swap (int *i, int *j){
	int k;
	k = *i;
	*i = *j;
	*j = k;
}

int main(){
	int m,n;
	int *mp = &m, *np = &n;
	cin >> m >> n;
	swap(mp, np);
	cout << *mp << "," << *np <<endl;
}
