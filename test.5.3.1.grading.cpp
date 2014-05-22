#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
	vector<int> grades;
	for(int i=51; i!=101; ++i)
		grades.push_back(i);
	string letter_grade;
	
	for (auto grade : grades){
		if(grade<60)
			letter_grade = scores[0];
		else{
			letter_grade = scores[(grade-50)/10];
			if(grade!=100){
				if(grade%10>7)
					letter_grade += "+";
				else if(grade%10<3)
					letter_grade += "-";
			}
		}
		cout << grade << ": " << letter_grade << endl;
	}
	return 0;
}