#include <iostream>
#include <string>

using namespace std;

int main()
{
	//zadanie 1
	/*
	int a, b;
	a = 7;
	b = 2;
	cout << a / b << endl;
	cout << static_cast<double>(a) / b << endl;
	cout << static_cast<double>(a/b) << endl;
	*/


	//zadanie 2
	/*
	double a = 3.99;
	int a2 = a;
	cout << static_cast<int>(a) << endl;
	cout << a2 << endl;

	double b = -3.99;
	int b2 = b;
	cout << static_cast<int>(b) << endl;
	cout << b2 << endl;



	//zadanie 3
	char znak = 'A';
	int liczba = znak;
	cout << liczba << endl;

	int liczba2 = 66;
	char znak2 = liczba2;
	cout << znak2 << endl;
	return 0;




	//zadanie 4
	int suma, liczba;
	cout << "Podaj sume i liczbe elementow: \n";
	cin >> suma >> liczba;
	int sredniaArytm;
	sredniaArytm = suma / liczba;
	cout << "Srednia arytmetyczna: " << sredniaArytm << endl;


	int suma, liczba;
	cout << "Podaj sume i liczbe elementow: \n";
	cin >> suma >> liczba;

	cout << "Srednia arytmetyczna: " << static_cast<double>(suma) / liczba << endl;

	

	//zadanie 5
	int a, b;
	cout << "Podaj liczbe wykonanych zadan: \n";
	cin >> a;
	cout << "Podaj liczbe wszystkich zadan: \n";
	cin >> b;

	if (b == 0)
	{
		cout << "Nie mozna dzielic przez zero!" << endl;
	}
	else
	{
		cout << "Procent wykonanych zadan: " << static_cast<double>(a) / b * 100 << "%" << endl;
	}

	

	//zadanie 6
	string tekst;
	cout << "Wprowadz dowolny tekst : " << endl;
	getline(cin, tekst);

	cout << "Liczba znakow w tekscie: " << tekst.length() << endl;

	//spacje tez sa wliczane
	

	//zadanie 7
	string tekst;
	cout << "Wprowadz dowolny tekst : " << endl;
	getline(cin, tekst);

	int a, b;
	cout << "Podaj indeks poczatkowy: ";
	cin >> a;
	cout << endl << "Podaj dlugosc wycinanego fragmentu tekstu: ";
	cin >> b;

	cout <<endl<< "Wycinany fragment tekstu: " << tekst.substr(a, b) << endl;
	

	//zadanie 8
	string data;
	cout << "Podaj date w formacie RRRR-MM-DD: " << endl;
	cin >> data;

	int rok = data.find("2026", 0); 
	int miesiac = data.find("11", 0);
	int dzien = data.find("10", 0);

	cout << "Rok: " << data.substr(rok, 4) << endl;
	cout << "Miesiac: " << data.substr(miesiac, 2) << endl;
	cout << "Dzien: " << data.substr(dzien, 2) << endl;


	cout << "Wpisz cos:  ";
	string text;
	//cin >> text; //nie da rady ze spacjami, problem jak ze scanf!
	std::getline(cin, text); //mozna i bez std::
	cout << "Dlugosc ciagu: " << text.length() << endl;
	string ni = "Tereferekukurykucipcipcip";
	string zywoplot = ni.substr(8, 6);
	cout << ".substr(8, 6): Od 9-ej, 6 liter: " << zywoplot << endl;
	zywoplot = ni.substr(8);
	cout << ".substr(8): Od 9-ej, do konca:   " << zywoplot << endl;
	cout << "Oryginal: " << ni << endl;
	cout << "Ostatnia litera: " << ni.substr(ni.length() - 1) << endl;

	int location = ni.find("kukuryku", 0); //znajdz litere lub caly podciag
	if (location != -1) { //zwroci -1 jezeli nie odnaleziono
		cout << "kukuryku od znaku: " << location << endl;
	}
	else {
		cout << "nie znaleziono frazy kukuryku" << endl;
	}
	

//zadanie 9
string tekst;
string wyraz;
cout << "Podaj tekst: " << endl;
getline(cin, tekst);

cout << "Podaj szukany wyraz: " << endl;
getline(cin, wyraz);

int pozycja = tekst.find(wyraz); 
if(pozycja != -1) {
	cout << "Wyraz " << wyraz << " znaleziony na pozycji : " << pozycja << endl;
}
else {
	cout << "Wyraz " << wyraz << " nie zostal znaleziony." << endl;
}


//zadanie 10
string adres;
cout << "Podaj adres poczty e-mail: " << endl;
getline(cin, adres);

int domena = adres.find("@");
if(domena != -1) {
	cout << "Domena: " << adres.substr(domena + 1) << endl;
	cout << "Nazwa uzytkownika: " << adres.substr(0, domena) << endl;
}
else {
	cout << "Niepoprawny adres e-mail." << endl;
}



//zadanie 11
string imie;
string nazwisko;
cout << "Podaj imie: " << endl;
getline(cin, imie);

cout << "Podaj nazwisko: " << endl;
getline(cin, nazwisko);

string pelneImieNazwisko;
pelneImieNazwisko = imie + " " + nazwisko;

cout << "Pelne imie i nazwisko: " << pelneImieNazwisko << endl;
cout << "Dlugosc pelnego imienia i nazwiska: " << pelneImieNazwisko.length() << endl;

*/


}
