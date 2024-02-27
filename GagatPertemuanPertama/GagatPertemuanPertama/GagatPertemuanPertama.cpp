#include <iostream>
using namespace std;

int main()
{
	// numeric nJejari, nluas
	float nJejari, nluas;
	// display 'Masukan jejari= '
	cout << "===Hitung Luas Lingkaran===";
	// accept nJejari
	cin >> nJejari;
	// compute nluas = 3,14 * r * r
	nluas = 3.14 * nJejari * nJejari;
	// display 'Luasnya= ' + nLuas
	cout << "Luasnya" << nluas;
}