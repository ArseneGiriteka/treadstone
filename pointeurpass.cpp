#include<iostream>
#include<string>

using namespace std;

int main()
{
	string repA,repB,repC,repD,repE,repF;
	char reponse;
	repA="arsene";
	repB="aristide";
	repC="alex";
	repD="alynthia";
	repE="anny";
	repF="akin";
	cout<<"A. arsene"<<endl<<"B. aristide"<<endl<<"C. alex"<<endl<<"D. alynthia"<<endl<<"E. anny"<<"F. akin"<<endl; 
	cout<<"vous est le quantieme enfant de votre famille ?";cin>>reponse;

	string *userResponce(0);
	cout<<"veillez entre la lettre correspondant a votre choix";cin>>reponse;
	switch(reponse)
	{
		case 'A':
			userResponce=&repA;
			break;
		case 'B':
			userResponce=&repB;
			break;
		case 'C':
			userResponce=&repC;
			break;
		case 'D':
			userResponce=&repD;
			break;
		case'E':
			userResponce=&repE;
			break;
		case'F':
			userResponce=&repF;
			break;
		default: cout<<"eurreur"<<endl;
}
		cout<<"vous etes "<<*userResponce<<endl;
	
	
	
	return 0;
}


