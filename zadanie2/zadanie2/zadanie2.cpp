#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int tablica[5] = { 1, 2, 3, 4, 5 };

	cout << "Tablica = " << tablica << endl;
	cout << "&Tablica = " << &tablica << endl;
	cout << "&Tablica[0] = " << &tablica[0] << endl;
	cout << "&Tablica[1] = " << &tablica[1] << endl;
	cout << "&Tablica[2] = " << &tablica[2] << endl;
	cout << "&Tablica[3] = " << &tablica[3] << endl;
	cout << "&Tablica[4] = " << &tablica[4] << endl << endl;

	cout << "(int)&Tablica[0] = " << (int)&tablica[0] << endl;
	cout << "(int)&Tablica[1] = " << (int)&tablica[1] << endl;
	cout << "(int)&Tablica[2] = " << (int)&tablica[2] << endl;
	cout << "(int)&Tablica[3] = " << (int)&tablica[3] << endl;
	cout << "(int)&Tablica[4] = " << (int)&tablica[4] << endl;

	int* wsk;
	wsk = &tablica[0];
	cout << endl << endl;
	cout << "Przeniesienie o 2 x 4 bajty = " << (int)(wsk += 2) << endl;
	cout << "Przeniesienie o kolejne 2 bajty = " << (int)(wsk += 2) << endl;
	cout << "Przeniesienie o kolejne 2 wyjdziemy poza adresy el. tablicy = " << (int)(wsk += 2) << endl;

	//do domu na string

	return 0;
}