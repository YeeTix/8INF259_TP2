#pragma once
#include <iostream>

class ColorCell {
public:
	ColorCell();
	~ColorCell();
private:
	//TODO

	friend std::istream& operator >> (std::istream& in, ColorCell& cell);
};

