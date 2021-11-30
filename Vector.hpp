#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <iostream>
#include "Fractie.hpp"
#include"Nr_complex.hpp"
using namespace std;

template <class X >
class vector{
	int dim;
	X *buf;
public:
	vector(int, X*);
	~vector();
	vector& operator=(vector&);
	void afisare();
	void sortare();	
};

#endif
