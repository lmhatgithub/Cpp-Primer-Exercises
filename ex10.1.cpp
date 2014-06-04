#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	int i;
	string vi;
	while(cin >> i)
		vi.push_back(i);
// 	cout << "Which val do you want to count? : " << endl;
	int val='a';
	cout << count(vi.begin(), vi.end(), val) << endl;
	return 0;
}