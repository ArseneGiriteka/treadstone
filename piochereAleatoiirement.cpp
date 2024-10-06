#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<vector>

using namespace std;

string piocherDictionnaire()
{
	vector<string>listeMembres;
	ifstream fichier("D:/fichier/dictionnare.txt");
	if(fichier)
	{
		string mot;
		int nbAleatoire;
		
		while(fichier>>mot)
		{
			listeMembres.push_back(mot); 	
		}
		srand(time(0));
		nbAleatoire = rand() % listeMembres.size();
		return listeMembres[nbAleatoire];
		
	}
	else
	{
		return "eurreur d ouverture du fichier";
	}
}


