#pragma once
#include <iostream>
#include <vector>

template<class Cell>
class GenTree {
public:
	GenTree(); // contrustor
	~GenTree(); // destructor
	GenTree(const std::vector<Cell>& population);
	std::string individuResultant();
	unsigned int nombreDeGeneration();
	std::string ancetresDeNiveau(unsigned int niveau);
private:
	//TODO
};

template<class Cell>
std::ostream& operator<<(std::ostream& out, const GenTree<Cell>& cell) {
	// TODO
	return out;
}

template<class Cell>
inline GenTree<Cell>::GenTree() {
}

template<class Cell>
inline GenTree<Cell>::~GenTree() {
}

template<class Cell>
GenTree<Cell>::GenTree(const std::vector<Cell>& population) {
	//TODO
}

template<class Cell>
unsigned int GenTree<Cell>::nombreDeGeneration() {
	//TODO
	return 0;
}

template<class Cell>
std::string GenTree<Cell>::ancetresDeNiveau(unsigned int niveau) {
	//TODO
	return "";
}

template<class Cell>
std::string GenTree<Cell>::individuResultant() {
	//TODO
	return "";
}
