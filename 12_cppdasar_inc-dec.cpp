#include <iostream>
using namespace std;

int main(){
	// increment dan decrement
	// preincrement dan postincrement
	
	int a = 5;
	int b = 5;
	
	// postincrement
	// a += 1; => a++
	cout << a << endl;
	cout << a++ << endl; // ditampilkan => ditambahkan
	cout << a << endl;
	cout << endl;
	
	// preincrement
	cout << b << endl;
	cout << ++b << endl; // ditambahkan => ditampilkan
	cout << b << endl;
	
	
	// postdecrement
	// a -= 1; => a--
	cout << a << endl;
	cout << a-- << endl; // ditampilkan => dikurangkan
	cout << a << endl;
	cout << endl;
	
	// predecrement
	cout << b << endl;
	cout << --b << endl; // dikurangkan => ditampilkan
	cout << b << endl;
	
	return 0;
}

