#include "ChromoCell.h"
#include "GenTree.h"
#include <iostream>
using namespace std;

ChromoCell::ChromoCell() { 
	GenTree <ChromoCell> Chromo; // initialize template (class)
}

ChromoCell::~ChromoCell() {
}

std::istream& operator >> (std::istream& in, ChromoCell& cell) {
	//TODO
	return in;
}