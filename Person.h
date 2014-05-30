#ifndef PERSON
#define PERSON
#include <iostream>
#include <string>

struct Person {
	std::string name;
	std::string address;
	
	std::string get_name() const {return name;}
	std::string get_address() const {return address;}
	
	std::istream &read(std::istream &is, Person &p);
	std::ostream &print(std::ostream &os, const Person &p);
};

std::istream &read(std::istream &is, Person &p){
	is >> p.name >> p.address;
	return is;
}

std::ostream &print(std::ostream &os, const Person p){
	os << p.get_name() << "@" << p.get_address() ;
	return os;
}

#endif