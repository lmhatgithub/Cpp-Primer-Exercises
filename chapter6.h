#include <iostream>
std::size_t c_c();

size_t c_c(){
	static size_t ctr = 0;
	return ++ctr;
}
