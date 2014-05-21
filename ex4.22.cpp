#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	vector<int> vi = {5,15,25,35,45,55,65,75,85,95,100};
	string grade;
	for(auto i:vi){
		cout << i << ": ";
		cout << ((i>90) ? "high pass" : ((i>75) ? "pass" : (i>=60 ? "low pass" : "fail"))) << endl;
	}
	return 0;
}