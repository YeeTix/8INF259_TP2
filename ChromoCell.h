#pragma once
#include <iostream>

//template <class cellType>

class ChromoCell
{
public:
	int element;  
	ChromoCell *filsgauche;
	ChromoCell *filsdroit;
	ChromoCell(int elem, ChromoCell *g = NULL, ChromoCell *d = NULL)//constructeur avec param�tres
	{
		element = elem;
		filsgauche = g;
		filsdroit = d;
	}
		
 	~ChromoCell();
	


private:
	//TODO
	
	friend std::istream& operator >> (std::istream& in, ChromoCell& cell);
	
};
