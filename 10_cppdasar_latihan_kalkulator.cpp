#include <iostream>
using namespace std;

int main(){
	float a, b, hasil;
	char aritmatika;
	
	cout << "===================================" << endl;
	cout << "Selamat datang diprogram kalkulator" << endl;
	cout << "===================================" << endl;
	cout << endl;
	
	// Memasukkan nilai dari user
	cout << "Masukkan nilai pertama : ";
	cin >> a;
	cout << "Pilih operator +, -, *, / : ";
	cin >> aritmatika;
	cout << "Masukkan nilai kedua : ";
	cin >> b;
	
	// Proses perhitungan
	if(aritmatika == '+'){
		hasil = a + b;
		cout << "hasil perhitungan : ";
		cout << a << " " << aritmatika << " " << b << " = " << hasil << endl;
	} else if(aritmatika == '-'){
		hasil = a - b;
		cout << "hasil perhitungan : ";
		cout << a << " " << aritmatika << " " << b << " = " << hasil << endl;	
	} else if(aritmatika == '*'){
		hasil = a * b;
		cout << "hasil perhitungan : ";
		cout << a << " " << aritmatika << " " << b << " = " << hasil << endl;
	} else if(aritmatika == '/'){
		hasil = a / b;
		cout << "hasil perhitungan : ";
		cout << a << " " << aritmatika << " " << b << " = " << hasil << endl;
	} else {
		cout << "\n Operator anda salah \n" << endl;
	}
	
	return 0;
}

