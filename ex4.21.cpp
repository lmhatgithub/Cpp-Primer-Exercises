#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> vi = {0,1,2,3,4,5,6};
	for(auto &i:vi)
		(i%2) ? i*=2 : i=i;
	for(auto i:vi)
		cout << i << " ";
	cout << endl;
	return 0;
}