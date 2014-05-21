#include <iostream>
using namespace std;

int main(){
	string s("some, string. isn't it?"), result;
	for (char c:s)
		if(!ispunct(c))
			result += c;
	cout << result << endl;
	return 0;
}
