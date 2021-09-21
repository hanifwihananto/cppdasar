#include <iostream>
using namespace std;

int main(){
	int a = 3;
	int b = 2;
	
	bool hasil;
	
	// Operator logika
	// not, and, or
	
	// not !
	hasil = !( a == 3);
	
	// and &&
	hasil = (a == 3) and (b == 2);
	
	// or ||
	hasil = (a == 3) or (b == 2);
		
	cout << hasil << endl;
	
	/* CATATAN
	and : kedua nilai benar maka menghasilkan True 
	or : salah satu nilai benar maka menghasilkan True 
	*/
	
	return 0;
}

