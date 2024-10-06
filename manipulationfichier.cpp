#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;


int main()
{
	int taille,position,i(1);
	vector<string>listeMembres;
	ifstream fichier("D:/fichier/dictionnare.txt");
	
	  string mot;
	  while(fichier>>mot)
	  {
	  	taille+=mot.size();
	  	position=taille-mot.size();
	  cout<<mot<<"   sa position est "<<position<<"  sa taille = "<<mot.size()<<"  elle est de rand "<<i++<<endl;
	  listeMembres.push_back(mot);
	  }
	  cout<<endl;
	  for(i=0;i<listeMembres.size();i++) cout<<"membre "<<i<<" est "<<listeMembres[i]<<endl;
	  cout<<endl;
	srand(time(0));
	int nbAleatoire;
	nbAleatoire=rand() % listeMembres.size();
	
	cout<<endl<<endl<<listeMembres[nbAleatoire]<<endl;
	return 0;
}

