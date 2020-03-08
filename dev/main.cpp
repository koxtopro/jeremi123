#include <iostream>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

enum komputer{
	Dell = 2999,
	Msi = 3500,
	Sony = 30,
	IBM = 15,
	Lenovo = 70,
	HP
};
int main() {
	/*
	to jest komentarz jeremi i tu przypisywanie wartosci do danej rzeczy
	komputer wartosc;
	wartosc = Lenovo;
	
	cout << wartosc << " POLSKICH ZLOCISZY"<< endl;
	
	typedef long long int lit;
	lit jeremi = 2140;
	
	cout << zmienna << endl; */ 
	
	int k = 8;
	cout << &k << endl;
	
	int *wskaznik_d = &k;
	
	cout << *wskaznik_d << endl;
	cout << wskaznik_d << endl;
	
	int e = 10;
	int *wskaznik_e = &e;
	
	int suma = *wskaznik_d + *wskaznik_e;
	
	cout << suma << endl;
	
		
		

	
	return 0;
}
