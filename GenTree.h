#pragma once
#include <iostream>
#include "ChromoCell.h"
#include <time.h>

template<class Cell>
class GenTree
{
public:
	GenTree(const std::vector<Cell>& population);

	std::string individuResultant();

	unsigned int nombreDeGeneration();
	std::string ancetresDeNiveau(unsigned int niveau);

private:
	Cell *racine; 
	//TODO
};

template<class Cell>
std::ostream& operator<<(std::ostream& out, const GenTree<Cell>& cell)
{
	// TODO
	return out;
}

template<class Cell>  //creation de mes noeuds //TODO
GenTree<Cell>::GenTree(const std::vector<Cell>& population)
{
	int i=0;
	int j=0;
	vector<*Cell> listeindividus;
	do
	{
	listeindividus.push_back(new ChromoCell(population[i],NULL,NULL));
	}
	while(i<population.size());
	if(listeindividus.size()==0)
		{
			racine=NULL;
		}
	else 
	{
		if (listeindividus.size()==1)
		{
			std::cout<<"population insuffisante"<<endl;
		}
		else
		{
			while(listeindividus.size()>=2)
			{
				i=rand()%listeindividus.size();
				do {j=rand()%listeindividus.size();} while(i==j);
				ChromoCell *noeud = new listeindividus[i]+listeindividus[j]; //definir + dans chromocell.h 
																			//voir si conversion necessaire 
				noeud->filsgauche = listeindividus[i];
				noeud->filsdroit = listeindividus[j];	
				listeindividus.erase(listeindividus.begin()+i);
				listeindividus.erase(listeindividus.begin()+j);
				listeindividus.push_back(noeud);
			}
			racine=listeindividus.begin();
		}
	}
	new ChromoCell()
}

template<class Cell>
unsigned int GenTree<Cell>::nombreDeGeneration()
{
	//TODO
	return 0;
}

template<class Cell>
std::string GenTree<Cell>::ancetresDeNiveau(unsigned int niveau)
{
	//TODO
	return "";
}

template<class Cell>
std::string GenTree<Cell>::individuResultant()
{
	//TODO
	return "";
}
