#include <iostream>
#include <vector>
using namespace std;

int main(){
	int i;
	vector<int> iv;
	while(cin >> i){
		iv.push_back(i);
	}
	decltype(iv.size()) index=0;
	for(index = 0; index!=iv.size()/2;index++){
		cout << iv[index]+iv[iv.size()-index-1] << " ";
	}
	cout << endl;	
	return 0;
}
