#include <iostream>
using namespace std;

int kuadrat(int x){
	int y;
	y = x*x;
	return y;
}

int tambah(int a, int b){
	int c;
	c = a + b;
	return c;
}

int main(){
	int input, hasil;
	cout << "Nilai kuadrat dari : ";
	cin >> input;
	hasil = kuadrat(input);
	cout << hasil << endl;
	
	int a, b, hasil2;
	cout << "Masukkan nilai a : ";
	cin >> a;
	cout << "Masukkan nilai b : ";
	cin >> b;
	hasil2 = tambah(a, b);
	cout << hasil2 << endl;
	
	return 0;
}
