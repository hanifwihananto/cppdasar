#include <iostream>
using namespace std;

int main(){
	float a, b, hasil;
	char aritmatika;
	
	cout << "===================================" << endl;
	cout << "Selamat datang diprogram kalkulator" << endl;
	cout << "===================================" << endl;
	cout << endl;
	
	// Masukkan nilai dari user
	cout << "Masukkan nilai pertama : ";
	cin >> a;
	cout << "Pilih operator +, -, *, / : ";
	cin >> aritmatika;
	cout << "Masukkan nilai kedua : ";
	cin >> b;

	// Proses perhitungan
	switch(aritmatika){
		case '+':
		hasil = a + b;
		cout << "hasil perhitungan : ";
		cout << a << " " << aritmatika << " " << b << " = " << hasil << endl;
		break;
		
		case '-':
		hasil = a - b;
		cout << "hasil perhitungan : ";
		cout << a << " " << aritmatika << " " << b << " = " << hasil << endl;
		break;
		
		case '*':
		hasil = a * b;
		cout << "hasil perhitungan : ";
		cout << a << " " << aritmatika << " " << b << " = " << hasil << endl;
		break;
		
		case '/':
		hasil = a / b;
		cout << "hasil perhitungan : ";
		cout << a << " " << aritmatika << " " << b << " = " << hasil << endl;
		break;
		
		default :
			cout << "Operator anda salah";
	}
	
	return 0;
}

