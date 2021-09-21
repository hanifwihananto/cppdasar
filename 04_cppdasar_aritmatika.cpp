#include <iostream>
using namespace std;

int main(){
	int a = 6;
	int b = 4;
	
	// Operator Matematika
	// +, -, *, /, %
	
	int hasil;
	
	// Penjumlahan +
	hasil = a + b;
	cout << a << " + " << b << " = " << hasil << endl;
	
	// Pengurangan -
	hasil = a - b;
	cout << a << " - " << b << " = " << hasil << endl;
	
	// Perkalian *
	hasil = a * b;
	cout << a << " x " << b << " = " << hasil << endl;
	
	// Pembagian /
	hasil = a / b;
	cout << a << " / " << b << " = " << hasil << endl;
	
	// Modulus (Sisa hasil bagi) %
	hasil = a % b;
	cout << a << " % " << b << " = " << hasil << endl;
	
	// Urutan eksekusi
	hasil = (a + b) * a;
	cout << hasil << endl;
	
	return 0;
}

