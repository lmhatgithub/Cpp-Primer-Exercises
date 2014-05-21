#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	vector<int> vi = {5,15,25,35,45,55,65,75,85,95,100};
	for(auto i:vi){
		cout << i << ": ";
		if(i>90)
			cout << "high pass." << endl;
		else if(i>75)
			cout << "pass." << endl;
		else if(i>=60)
			cout << "low pass." << endl;
		else
			cout << "fail." << endl;
	}
	return 0;
}