#include <iostream>
using namespace std;

int main(){
	// Bilangan Bulat
	int a = 10; // 32-bit
	unsigned int a = 10 // tidak memiliki tanda 
	long long b = 10; // 64-bit
	short c = 10; // 16-bit
	
	// Bilangan Decimal
	float d = 1.0; // 32-bit
	double e = 2.0; // 64-bit
	
	// Karakter
	char f = 'a'; // 8-bit
	
	// Boolean
	bool g = true; // 8-bit
	
	// Pengecekkan
	cout << "integer" << endl;
	cout << a << endl;
	cout << sizeof(a) << " byte" << endl;
	cout << numeric_limits<int>::max() << endl;
	cout << numeric_limits<int>::min() << endl;
	cout << endl;
	
	
	/* CATATAN
	1 byte = 8-bit
	[0|0|0|0|0|0|0|0] => 8-bit
	
	int = 4 byte 	=> 32-bit 
	[ +/- ] 		=> 31-bit 
	int = 2^31		=> 2147483648
	[ 0 ]		MAX	=> 2147483647
	[ 0 ] 		MIN => -2147483648
	*/
	
	return 0;
}

