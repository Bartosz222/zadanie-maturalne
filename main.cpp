#include <iostream>
#include <vector>
using namespace std;
int liczba;
int czynnik = 3;
int ilosc;
vector <int> tablica;

int main() {
	cout<<"Podaj liczbe:";
	cin>>liczba;
	if(liczba % 2 == 0 )return true;
	while(liczba>1){
		if(liczba%czynnik==0){
			ilosc++;
			if(czynnik != tablica[ilosc-1]){
				tablica.push_back(czynnik);
			}
		}
		while(liczba%czynnik==0){
			liczba /= czynnik;
		}
		czynnik = czynnik + 2;
		if(ilosc > 3)return false;
	}
	if(ilosc == 3) return true;
	if(ilosc < 3) return false;
	return 0;
}
