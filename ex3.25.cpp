#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	vector<unsigned> scores(11, 0); // 11 buckets, all initially 0
	unsigned grade;
	auto it = scores.begin();
	while (cin >> grade) {
		if (grade <= 100){
			it = scores.begin()+grade/10;
			++ *it;
		}
	} 
	for (auto it = scores.begin();
		 it != scores.end();
		 it++)
		 cout << *it << " ";
	cout << endl;
	return 0;
}
