#include <iostream>
using namespace std;

int main(){
	string word;
	string sum;
	while(cin >> word){
		sum += word + " ";
	}
	cout << sum + "." << endl;
}