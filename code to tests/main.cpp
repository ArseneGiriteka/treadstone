#include"entete.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	double nbPremier(0),nbSecond(0);
	int n(0);
	cout<<"nbPremier = ";cin>>nbPremier;
	cout<<"nbSecond = ";cin>>nbSecond;
	cout<<"\n\n\n\n";
	cout<<"veillez entre le chiffre correspondant a l operation voulu!"<<endl;
	cout<<"1.addition  2.soustraction  3.multiplication\n4.division  5.puissance  6.racine"<<endl;
	 
	switch(n)
	{
		case 1:
			{
				cout<<nbPremier<<" + "<<nbSecond<<" = "<<addition(nbPremier,nbSecond)<<endl;
				break;
			}
		case 2:
			{
			cout<<nbPremier<<" - "<<nbSecond<<" = "<<soustraction(nbPremier,nbSecond)<<endl;
				break;
			} 
		case 3:
			{
				cout<<nbPremier<<" * "<<nbSecond<<" = "<<multiplication(nbPremier,nbSecond)<<endl;
				break;
			
			}
		case 4:
		    {
		    	cout<<nbPremier<<" / "<<nbSecond<<" = "<<division(nbPremier,nbSecond)<<endl;
				break;
			}	
		case 5:
			{
				cout<<nbPremier<<" expossant "<<nbSecond<<" = "<<power(nbPremier,nbSecond)<<endl;
				break;
			}
		case 6:
		    {
		    	cout<<"racine "<<nbSecond<<"eme de"<<nbPremier<<" = "<<addition(nbPremier,nbSecond)<<endl;
				break;
			}	
		default :
			{
				cout<<"veillez entrez un vrai choix"<<endl;
				break;
			}
			
	}
	return 0;
}
