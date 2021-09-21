#include <iostream>
using namespace std;

int main(){
	// assignment
	int a = 10;
	cout << "nilai awal a adalah " << a << endl;
	
	// assignment operator
	// +=, -=, *=, /=, %=
	
	// += : a = a + ...
	a += 3;
	cout << "ditambah dengan 3 : " << a << endl; 
	
	// -= : a = a - ...
	a -= 3;
	cout << "dikuran dengan 3 : " << a << endl;
	
	// *= : a = a * ...
	a *= 3;
	cout << "dikali dengan 3 : " << a << endl;
	
	// /= : a = a / ...
	a /= 3;
	cout << "dibagi dengan 3 : " << a << endl;
	
	// %=
	a %= 3;
	cout << "dimodulus dengan 3 : " << a << endl;
		 
	return 0;
}

