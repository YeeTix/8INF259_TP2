#include <iostream>
#include "ColorCell.h"
#include "GenTree.h"
#include <fstream>
using namespace std;

ColorCell::ColorCell() {
	GenTree <ColorCell> Color; // initialize template (class)
	ifstream(myFile);
	if (!myFile.fail()) {
		while (myFile) {

		}
	}
}

ColorCell::~ColorCell() {
}

std::istream& operator >> (std::istream& in, ColorCell& cell) {
	//TODO
	return in;
}