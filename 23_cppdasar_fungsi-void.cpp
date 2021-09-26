#include <iostream>
using namespace std;

// reporter
int kuadrat(int x){ // fungsi kembalian
	int y;
	y = x*x;
	return y;
}

// worker
void tampilkan(int input){ // fungsi tidak memiliki kembalian
	cout << input << endl;
}

int main(){
	int input, hasil;
	cout << "Nilai kuadrat dari : ";
	cin >> input;
	hasil = kuadrat(input);
	tampilkan(hasil);
	
	return 0;
}
