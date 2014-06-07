#ifndef TEXTQUERY_H
#define TEXTQUERY_H

#include <memory>
#include <fstream>
#include <vector>
#include <string>
#include <map>
#include <set>

#include "QueryResult.h"

using namespace std;

class TextQuery{
	friend class QueryResult;
	public:
		typedef vector<string>::size_type line_no;
		TextQuery(ifstream&);
		QueryResult query(const string&) const;
	private:
		shared_ptr<vector<string>> file;
		map<string, shared_ptr<set<line_no>>> wm;
};

#endif