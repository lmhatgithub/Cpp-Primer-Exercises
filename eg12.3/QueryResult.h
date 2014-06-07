#ifndef QUERYRESULT_H
#define QUERYRESULT_H

#include <iostream>
#include <memory>
#include <string>
#include <set>
#include <vector>

#include "TextQuery.h"

using namespace std;

class QueryResult{
	friend ostream &print(ostream&, const QueryResult&);
	public:
		typedef vector<string>::size_type line_no;
		QueryResult(string s, shared_ptr<set<line_no>> p, shared_ptr<vector<string>> f ) :
					sought(s), lines(p), file(f) {}
	private:
		string sought;
		shared_ptr<set<line_no>> lines;
		shared_ptr<vector<string>> file;
};

#endif