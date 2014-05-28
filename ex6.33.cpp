#include <iostream>
#include <vector>
using namespace std;

void print_vector(vector<int>::iterator it, vector<int>::iterator end){
	if(it != end){
		cout << *it << ", " ;
		print_vector(++it, end);
	}
	else
		cout << endl;
}

int main(){
	vector<int> vi = {1,2,3,4,5};
	vector<int>::iterator it = vi.begin(), v_end = vi.end();
	print_vector(it, v_end);
	return 0;
}
