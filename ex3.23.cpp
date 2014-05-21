#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	vector<int> vi;
	for(int i = 0; i!=10; i++)
		vi.push_back(i);
	
	cout << "Original vector:\t ";
	for(auto it = vi.begin(); 
		it != vi.end();
		++it)
		cout << *it << " ";
	cout << endl;
	
	cout << "Tripled vector:\t ";
	for(auto it = vi.begin(); 
		it != vi.end();
		++it){
		*it *= 3;
		cout << *it << " ";
	}
	cout << endl;
		
	return 0;
}
