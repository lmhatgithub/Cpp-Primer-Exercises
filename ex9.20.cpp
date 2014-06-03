#include <iostream>
#include <list>
#include <deque>
using namespace std;

int main(){
	list<int> ilist = {0,1,2,3,4,5,6,7,8,9};
	deque<int> oddq, evenq;
	auto it = ilist.begin();
	while(it != ilist.end()){
		if(*(it)%2 == 0)
			evenq.push_back(*it);
		else
			oddq.push_back(*it);
		++it;
		}
	cout << "Odd:\t";
	for(auto o : oddq)
		cout << o << ' ';
	cout << endl;
	
	cout << "Even:\t";
	for(auto e : evenq)
		cout << e << ' ';
	cout << endl;
	return 0;
}