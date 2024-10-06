#include<iostream>
/*
pour une variable: int nombre
=>nombre:  represent la valeur du varible;
=>&nombre: son adresse;

pour un pointeur: int *pointeur
=>pointeur:   represente l acces a la valeur du pointeur(donc l'adresse du variable pointe);
=>*pointeur : represente l acces a la valeur du variable pointe;


*/

using namespace std;
int main()
{
	int age(16);
	int *ptr(0);
	
	ptr=&age;//referencer un pointeur
	cout<<"l adresse de l age  "<<&age<<endl;
	cout<<"la valeur du pointeur "<<ptr<<endl;
	cout<<"la valeur pointu par le pointeur est "<<*ptr<<endl;//deferencer un pointeur
	return 0;
}
