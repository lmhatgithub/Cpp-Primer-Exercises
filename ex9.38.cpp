#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> vi;
	cout << "Init:" << endl;
	cout << "vi.size:\t" << vi.size() << endl;
	cout << "vi.cap:\t" << vi.capacity() << endl;
	vi = {0,1,2,3,5};
	cout << "After assign:" << endl;
	cout << "vi.size:\t" << vi.size() << endl;
	cout << "vi.cap:\t" << vi.capacity() << endl;
	vi.push_back(6);
	cout << "add_new:" << endl;
	cout << "vi.size:\t" << vi.size() << endl;
	cout << "vi.cap:\t" << vi.capacity() << endl;
	vi.shrink_to_fit();
	cout << "shrink_to_fit:" << endl;
	cout << "vi.size:\t" << vi.size() << endl;
	cout << "vi.cap:\t" << vi.capacity() << endl;
	return 0;
}