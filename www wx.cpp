#include<iostream>

using namespace std;

int main ()
 {
 	double a(6);
 	double b(4);
 	int som,diff,mult;
 	double div;
 	som = a + b;
 	diff = a - b;
 	if(b!=0) div = a / b;
 	else cout<<"eurreur"<<endl;
 	mult=a*b;
 	
	
	cout<<"bonjours"<<endl<<"addition = "<<som<<"soustraction = "<<diff<<"multiplication="<<mult<<"division= "<<div;
	
}
