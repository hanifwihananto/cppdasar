#include <iostream>
using namespace std;

// fungsi menghitung luas persegi panjang
double hitung_luas(double p, double l){
	double luas = p * l;
	return luas;
}

// fungsi menghitung keliling persegi panjang
double hitung_keliling(double p, double l){
	double keliling = 2 + (p * l);
	return keliling;
}

// fungsi menampilkan luas
void tampilkan_luas(double p, double l){
	cout << "luasnya adalah "; 
	cout << hitung_luas(p,l) << endl;
}

// fungsi menampilkan keliling
void tampilkan_keliling(double p, double l){
	cout << "kelilingnya adalah "; 
	cout << hitung_keliling(p,l) << endl;
}

int main(){
	double panjang, lebar;
	cout << "Panjang : ";
	cin >> panjang;
	cout << "Lebar : ";
	cin >> lebar;
	
	tampilkan_luas(panjang,lebar);
	tampilkan_keliling(panjang,lebar);
	
	return 0;
}
